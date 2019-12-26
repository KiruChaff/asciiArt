import PIL
import PIL.Image
import PIL.ImageFont
import PIL.ImageOps
import PIL.ImageDraw

PIXEL_ON = 0  # PIL color to use for "on"
PIXEL_OFF = 255  # PIL color to use for "off"


def main():
    # for i in range(0xA0, 0xC0): ## range of unicode-characters
    for i in range(0x20, 0x2a): ## range of unicode-characters
        image = text_image(chr(i))
        image.save('unicode_alphabet/{}.jpg'.format(i))

def text_image(char):
    "Convert a character to a grayscale"
    grayscale = 'L'
    font_size = 20
    font = PIL.ImageFont.truetype("DejaVuSans.ttf", font_size)
    ptToPx = lambda pt: int(round(pt * 96.0 / 72))  # convert points to pixels
    width, height = 20, int(ptToPx(font_size*1.4))
    image = PIL.Image.new(grayscale, (width, height), color=PIXEL_OFF)
    draw = PIL.ImageDraw.Draw(image)
    vertical_position = 0
    horizontal_position = 0
    draw.text((horizontal_position, vertical_position),
              char, fill=PIXEL_ON, font=font)
    ## fit the image into format -- the numbers are uniquely chosen
    return image

if __name__ == '__main__':
    main()
