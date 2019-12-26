#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"



struct letter {
        char letter;
        unsigned char** image;
        int img_width, img_height;
};

// evaluates the average difference of a character image's and the input image's pixels
float difference(int x, int y, struct letter chr, size_t img_width, size_t img_height, unsigned char image[img_height][img_width]){
        if (x+chr.img_width>=img_width || y+chr.img_height>=img_height)
                return -1.0;
        float accu = 0.0;
        int i,j;
        i=j=0;
        for (; i<chr.img_height; i++) {
                j=0;
                for(; j<chr.img_width; j++) {
                        accu += (float) abs(chr.image[i][j]-image[y+i][x+j]);
                }
        }
        return accu/(i*j);
}

// evlatuates the appropriate character for a specific position in the image
char chooseLetter(int* x, int* y, size_t img_width, size_t img_height, unsigned char image[img_height][img_width], struct letter* letters, int numberOfLetters){
        struct letter best;
        float leastDif = NAN;
        float divisor = 2.5f; // equivilant to resolution and size (high divisor -> large result; small divisor -> small result)
        // iterate through all characters
        for (int i=0; i<numberOfLetters; i++) {
                struct letter cur = letters[i];
                float curDif = difference(*x, *y, cur, img_width, img_height, image);
                if (curDif > -1.0)
                        if (isnan(leastDif) || curDif < leastDif) {
                                leastDif = curDif;
                                best = cur;
                        }

        }
        // a character was found
        if(!isnan(leastDif)) {
                *x += (int) best.img_width/divisor;
                return best.letter;
        }
        // no character matched so newline
        *x = 0;
        *y +=(int) letters->img_height/divisor;
        return '\n';
}


// convert an image to similar string
char* imgToStr(size_t img_width, size_t img_height, unsigned char image[img_height][img_width], struct letter* letters, int numberOfLetters){
        char* result = malloc(img_height*img_width*sizeof(char));
        int x, y, i;
        x=y=i=0;
        while (y<img_height) { //append character until the end
                result[i++]=chooseLetter(&x, &y, img_width, img_height, image, letters, numberOfLetters);
                printf("%c",result[i-1]);
        }
        result[i]='\0';
        return result;
}

int main(int argc, char** argv){
        int filter=127;
        if (argc < 2 || argc > 3) {
                fprintf(stderr, "USAGE: %s <JPEG to artify> [optionally: filter-threshold (0-255) -- default: 127]\n", argv[0]);
                return 1;
        } else if (argc == 3)
                filter = atoi(argv[2]);
        // loading the image
        int width, height, n;
        unsigned char* img = stbi_load(argv[1], &width, &height, &n, 1);
        // converting the one-dimensional-image data to a two-dim. array

        unsigned char pixels[height][width];
        for (int i=0; i<height; i++)
                for (int j=0; j<width; j++)
                        // pixels[i][j]=img[i*width+j]; // for without a filter
                        if (img[i*width+j]>filter)
                                pixels[i][j]=255;
                        else
                                pixels[i][j]=0;
        // prepare letters
        // open alphabet directory
        DIR *d;
        struct dirent *dir;
        d=opendir("unicode_alphabet");
        int number_of_letters=0;
        struct letter* alphabet = malloc(100 * sizeof(struct letter));
        if (d) {
                int i=0;
                // iterate through every file
                while ((dir = readdir(d)) != NULL) {
                        if (*(dir->d_name) == 0x2E) // if the file is not hidden
                                continue;
                        // collect data of alphabet-file
                        int dim;
                        char* path = (char*) calloc(24, sizeof(char));
                        sprintf(path, "unicode_alphabet/%s", dir->d_name);
                        unsigned char* letter_raw = stbi_load(path, &(alphabet+i)->img_width, &(alphabet+i)->img_height, &dim, 1);
                        char* file_letter=malloc(sizeof(char*));
                        int chr_index = 0;
                        while (*((dir->d_name)+chr_index) != 0x2E && *((dir->d_name)+chr_index) != '\0') { // split the filename by the extension -- so only the char-integer is in file_letter
                                *(file_letter+chr_index) = *((dir->d_name)+chr_index);
                                chr_index++;
                        }

                        (alphabet+i)->letter = atoi(file_letter);

                        // convert the one-dimensional image data into a two-dimensional one

                        (alphabet+i)->image= malloc((alphabet+i)->img_height*sizeof(unsigned char*));

                        for (int y=0; y<(alphabet+i)->img_height; y++) {
                                *((alphabet+i)->image+y) = malloc((alphabet+i)->img_width*sizeof(unsigned char));
                                memcpy(*((alphabet+i)->image+y), letter_raw+((alphabet+i)->img_width*y), (alphabet+i)->img_width);
                        }
                        i++;
                }
                number_of_letters=i;
        }
        char* result = imgToStr(width, height, pixels, alphabet, number_of_letters);
        // save result to file
        FILE *fp = fopen("output/result.txt", "w");
        fprintf(fp, "%s",result);
        fclose(fp);

        return 0;
}
