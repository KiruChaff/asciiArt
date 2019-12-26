# asciiArt
A project for converting a jpeg image into a text file where the characters resemble the image.


                                                @@@@@@@g&                                   
                                            @@@@@@@@@@@@@@@@&                               
                                         @@@@@@@@@@@@@@@@@@@@@@(                            
                                        @@@@@@@@@@@@@@@@@@@@@@@@@@(                          
                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(                        
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&      ..               
                                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$ _we^``  .           
                                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@P        `          
                                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(^``.`W@F          #         
                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###[    W@(          @J        
                               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@g(    .WB          B         
                              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(   .M@g_    _@P          
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$     ^MMWMP^            
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$                      
                         @@@@@@@@@@@@@@@@@W@@@@@@@@@@@@@@@@@@@@@@@@@@@&                     
                       @@@WMP*^``                   ``^^PMWW@@@@@@W@@@@#(                   
                     @@Bf                                     .^^MW@gZW@B                   
                    @@P                                             .^MNg                   
                   .@#'                                                 .R_                 
                    @@$                                                   ^,                
                     W@@g        ___g@@@@gm@g@@g_____                      ]                
                        ^MW@@@@@WMPF^^```        .``^^PMmwg__              .`                
                                                            `^=u,.      ..,'                 
                                                                 .^*~~~:^                    
                              @@@$                                                                    
                            @@@@@@@$                                                                  
                           @@@@@@@@@#                                                                 
                          @@@@@@@@@@@#                              @@@@@@@                           
                         @@@@@@@@@@@@@$                            @@@@@@@@@$                         
                         @@@@@@@@@@@@@@)                          @@@@@@@@@@@#                        
                         @@@@@@@@@@@@@@@$                       @@@@@@@@@@@@@@&                       
                         W@@@@@@@@@@@@@@@@                    @@@@@@@@@@@@@@@@@J                      
                          @@@@@@@@@@@@@@@@@@(    _         @@@@@@@@@@@@@@@@@@@@[                      
                           W@@@@@@@@@@@@@@@@@@@@@/   .@@@@@@@@@@@@@@@@@@@@@@@@@                       
                            ^@@@@@@@@@@@@@@@@@@@`     @@@@@@@@@@@@@@@@@@@@@@@@f                       
                              .W@@@@@@@@@@@@@@P        W@@@@@@@@@@@@@@@@@@@@@`                        
                  (               ^W@@@@@@@W*   &       .W@@@@@@@@@@@@@@@@W`                          
                 .B                           @@@   @#     ^W@@@@@@@@@WP`                             
                  @_,                        @@P    W@[                                               
                  +@                                 ^f                              @'               
                   .BF                                                              @F                
                    @g                                                             @`                 
                      ##                                                          @R                  
                      P^, )                                                     @P                    
                         %E  g                                               #_P`f                    
                         F ^g#   $          j     B                       g@WB                        
                            @PWg_@   .$     (    @f    @j    #   @    @_@P$   l                       
                            `    f^MWm@g___@@    @     @     # __@@@WP@   B                           
                                      @     B.```@`````@````B`   ^    .f                              
                                      f     F    M     @    @j    f                                   
                                                       .    @'                                        

artify.c is the main program that converts the image. letterToImg.py allows to extend the alphabet of available characters.
However this program is not designed to utilize non-ascii characters. if the alphabet is in such way extended the code has to be adjusted.

The code is further documented in line.

Special thanks to [nothings](https://www.github.com/nothings) to provide the stb library.

To use this program the image has to be in the same directory as the executable and passed as the second parameter. Optionally a third parameter may be passed to set a threshold at what greyscale a pixel is either white or black (0-255).

This program works especially well with cartoons and simple large black and white images. The resolution can be adjusted in the code (and obviously recompiled) the line is commented. 

Some examples follow:

                                        ______gg@@@@@ggg____                                         
                                  __@@@WMMP*^^`````````^^^MW@@@@&&                                   
                             __@@MPF^`                      .^^W@@@@@g&(                             
                         __@@MF``                               .^W@@@@@@@&(                         
                      _@@MP`                                       ^W@@@@@@@@g(                      
                    _@MF`                                           .^W@@@@@@@@@&(                   
                 _@BP`                                                .M@@@@@@@@@@@&                 
               _@Bf`                                                   .M@@@@@@@@@@@@$               
             _@Bf                                                       .@@@@@@@@@@@@@@$             
            @Bf                                                          .@@@@@@@@@@@@@@@$           
          _@P`                                 @@@@@@@@&                  W@@@@@@@@@@@@@@@&(         
         @Bf                                  @@@@@@@@@@&(                 @@@@@@@@@@@@@@@@@)        
        @P`                                  @@@@@@@@@@@@B,                @@@@@@@@@@@@@@@@@@$       
       @P`                                  .@@@@@@@@@@@@B'                @@@@@@@@@@@@@@@@@@@$      
      @P                                     ^W@@@@@@@@@Bf                 @@@@@@@@@@@@@@@@@@@@$     
     @P                                       .WW@@@@@BP`                  @@@@@@@@@@@@@@@@@@@@@$    
    @P`                                          .````                    @@@@@@@@@@@@@@@@@@@@@@@$   
   @Bl                                                                    @@@@@@@@@@@@@@@@@@@@@@@@)  
   @f                                                                    @@@@@@@@@@@@@@@@@@@@@@@@@&( 
  @8                                                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@$ 
  Mf                                                                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@Bj
 @B'                                                                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#)
 @F                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$
 #[                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B
 #J                                                         _@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B
 #J                                                  &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B
 #J                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B
.#(                                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@B
.@$                               _@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@E
.@B                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@f
 W@)                           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Bl
 .@$                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@F 
  W@)                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Bl 
  .@B(                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Wf  
   .@$                     @@@@@@@@@@@@@@@@@@@@@WMMMMWW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@P   
    .@$                   @@@@@@@@@@@@@@@@@@@@Bf       ^W@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@8'   
     ^@$                  @@@@@@@@@@@@@@@@@@@P          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@8`    
      ^@g                 @@@@@@@@@@@@@@@@@@#J            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@9`     
       .@g               .@@@@@@@@@@@@@@@@@@#)            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@P`      
        .MB(             .@@@@@@@@@@@@@@@@@@@&(          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@BF        
          ^@g             W@@@@@@@@@@@@@@@@@@@@g(      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Bf         
           .MBL           .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@BF`          
             ^Mg_          ^W@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WP`            
               ^Mg_         ^W@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WP`              
                 ^WBg_       ^W@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@BP`                
                   .^Mgg_     .M@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WMf`                  
                      .^W@g_    ^M@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WM*`                     
                         .^MWgg__  %W@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@BP*`                        
                             .^MW@gg__MW@@@@@@@@@@@@@@@@@@@@@@@@@@@@WMP^`                            
                                  `^^MWW@@@@@@@@@@@@@@@@@@@@@WWMPF^`                                 

                                                                                                               
                                                                                                               
                                                                                                               
                                                                                                               
                                                   &&@@@@@@@@L        ___                                      
                              @gr     @@@@@@@@@@@@@@@@@@@@WP"    g- .__%@@@@@@g&&                              
                        .__@@@@Bj m@@@@@@@@@WWW###@@@@@@B`    &@@$  WW@@@@@@@@@@@@@@@@@g&(                     
                         ""'      .``^W@@@@#(   @@@@@BP"   @@@@@@&(    """""""^^TPPMMW##@@@@@@&(  __           
                           &&@&&&     %@@@@@&@@@@WM*` .__@@@@@@@@@@@&&(   ____        _@@@@@@@@@@@@P`          
            @@&@@@@@@@@@@@@@@@@@@@t .@@@@@@@@@@@E'     ^W@@@@@@@@@@@@@@@@@@BP"    @@@@@@@@@@@@WMP"'            
      @@@@@@@@@@@@@@@@@@WW##@@@@WMP  "^W@@@@@@@@@@@@&(     ^W@@@@@@@@@@WMF'   _@@@@@@@@@@@WP*"                 
    .@@@@@@@@@@@#(^```    @@@@Bf       .@@@@@PMW@@@@@@@@g(    ^^W@@@@Mf'   @@@@@@@@@@WMP^     @@@@&(           
    .^PF""`@@@@@@$      @@@@P"   @@@@$  W@@@#J   ""%@@@@@@@@g(   ^MF'   @@@@@@@@@WMP`    .w@@@@@@@@BJ          
           .@@@@@@)  _@@@WP'  _@@@@@@#J .@@@@(   @@@@@@@@@@@@@@@g    @@@@@@@@##""             ^WW@@BJ          
    .@@@@&( .@@@@@&@@@@WP'  @@@@@@@@@@8   @@@@@@@@@@@@@@@@@@WWMF  _@@@@@@@@@@@@@@@@@@@@@@#g&(                  
     W@@@@&( .@@@@@@@WP'  @@@@@@@@@@P"   @@@@@@@@@@@@WMPP""     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@g&& ___        
      ^W@@@8   @@@@@P'  @@@@@@@@@@9`  @@@@@@@@@WMP"'       _ .@@@@@@WBMMPPP""""""""""PMMMMWWW@@@@@@ZEMMWws     
        @@@[  @@@@@@&  .@@@@@@@@@#( .@@@@@WWW@[     @@@@@@@f  ^@P"                             """^^TP*        
       @@@#J .@@WW@@@$ .@@@@BW#@@@(  ^MF"'    "  @@@@@@@@@#( .#"   @@@@@@@@@@@@@@@@@@@@@@@@@g&(__,             
      m@@@#( .Pf`^W@@#( .@@@@@@@@@@$      @g(  _@@@@@@@@@@#(     @@@@@@@@@@@@@@@@@@@@@@@@#@@@@@@P`             
      .@@@@$      ^W@@B, ^@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#W@@@@@@&&&&@@@@WP`               
       ^@@@@@@@@$  ^WWMf  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#P@@&ZZZZ"""""Z_@@@@@@@@@@@@@@Bf                  
       .@@@@@@@@@$       _@@@@@@@@W#@@@##"_ZZZZ"""""%###P""__@@@@@@@@@@@@@@@@@@@@@@@@@@@WPf                    
       .@@@@@W@@@@@&&@@@@@@@@@@@@@&$&ZZ_@@@@@@@@@@@@@@@@@@W@@@@@@@W@@@@@@@@@@@@@@WMP^^``                       
        .W@@@$@#@@@@@@@@@@@@@@@@@@@@@@@@(W@@@@@W@@@@@@@@@@M@@@@@@B@@@@@WWWWWMMP^`                              
         .^W@@@@g@@@@@@@@@@@@@@@@WMW@@@@@a_W@@@&@@@@@@@@@@M@@@@@Bf^^^^`                                        
             .``^^WWWWWWMP^``````    ..`    W@@W#WW#######M#####"                                              
                                           &@@@@@@@@@@@@@@@@@@@@@@@@@g&(                                       
                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J                                    
                                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@f                                    
                                   W@@@@@@MPPZZZ&Z @@@@@&j+&&ZZZZT@P@@@@WP`                                    
                                    ^MMMMMMMMMMW@BW@@@@@#[@@@@BJ^^^^^^^``                                      
                                                @#!@&@@gg(@@@@BJ                                               
                                                @@@@@@@P"__^^M#'            _                                  
                                             ___^^^P_ZZ_B`WBMW@WWWWq@g_gg@@@WB(                                
                                           _gP^T^^^@E^^PMP    ^`  .WP.```WBF`@A_                               
                                 ___   _mmWP^P     .`                         `W$                              
                                #^MW@@@8`             ..__..            ..      B                              
                                $    .@Bl              """%#==au,,,,,,,a=~r     Bj                             
                                E     ^Mf           ._,uua,____.. . ....._____  #J                             
                               @F                    `       ^"""    ==#P^^```  #J                             
                               @f                        &&                     #(                             
                               @$                  ._@@@WW@@@@@@(     _@@@@WWW@g@$                             
                               W$            g   .wMP^_#      ^9[,f.,w]#P__   .@@8                             
                                #(          .PJ  ^` .r`_ #%$"Y[_    .+f_-&%&z__@B'                             
                               _@@aau__     ~f       .^5-DLZDA<`     ^MF-1@Z=^`m$                              
                             @#"`____^"                - __   f       .1"    <`.@)                             
                            .B =r^  ^h_                  .`    ___,    ^$       .#J                            
                            .Bj$,f a  1                     y'gF`       ^)       @[                            
                             ^Ry  #'  F_                   y`.{..____    @J      #f                            
                              .^A_$_, #"                  y`  ^\~MF^T__gw#f4    @F                             
                                .Mb(  #I                 3`                 I  @P                              
                                  ^Bj     j             g'       ___,g[___    @F                               
                                   ^Mg___e`             F      ###P"#"%m#@bgJ@F                                
                                    .#[^`    +_        #'   @@&@L@&@&&@@@g Z@P                                 
                                    .#[      .^(      @f   @@@@@@@@@@@@@Bf#Qg'                                 
                                     mf       .^L     #l @@@@@@@@@@@@@@BJ  #f                                  
                                      $        .^j   .F .PPMMPF^``.^@@WB  @P                                   
                                      g              .f.4           ^fL}  #J                                   
                                      B      +g_        ^PH(        y!4/  #`                                   
                                      8        Ra_       ^~CH[}^$')D~@Dr  F                                    
                                     @F     .9( .Mb__          ..,a=P`   #/                                    
                                     mf      .9(  .^Ma_                 @f                                     
                                     @[       Wg,    .^Rg__           _@f                                      
                                     +J                 .^Meg_______gdfWf                                      
                                                            .`^^^^^``  .*                                      

                                                                                                   
                                                             &@@@@@@@g&                            
                                                          @@@@@@@@@@@@@@@@&                        
                                                        @@@@@@@@@@@@@@@@@@@@@(                     
                                                       @@@@@@@@@@@@@@@@@@@@@@@&(                   
                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@(                  
                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@(                 
                                                     W@@@@@@@@@@@@@@@@@@@@@@@@@@@$                 
                                                     .@@@@@@@@@@@@@@@@@@@@@@@@@@@B                 
                                                      .@@@@@@@@@@@@@@@@@@@@@@@@@@F                 
                  @@@@@&                                W@@@@@@@@@@@@@@@@@@@@@@@B                  
             @@@@@@@@@@@@@@&                          &&&@@@@@@@@@@@@@@@@@@@@@@P`                  
           @@@@@@@@@@@@@@@@@@$               @@@@@@@@@WWWWW@@@@@@@@@@@@@@@@@@P`                    
         @@@@@@@@@@@@@@@@@@@@@&          @@@@@@@@@B*`         ^^W@@@@@@@#MP`                       
        @@@@@@@@@@@@@@@@@@@@@@@$     @@@@@@@@@@@@P                ^W@@@@&(                         
        @@@@@@@@@@@@@@@@@@@@@@@@(  @@@WWWWW@@@@@B                   .W@@@@@$                       
       @@@@@@@@@@@@@@@@@@@@@@@@@(@@M^       ^W@@[                     .W@@@@@(                     
       @@@@@@@@@@@@@@@@@@@@@@@@@@B`           .W[     wmwg_             ^@@@@@&                    
      .@@@@@@@@@@@@@@@@@@@@@@@@@F                    P    ^N_            ^@@@@@@(                  
      .@@@@@@@@@@@@@@@@@@@@@@@@f           ._       @J      ^6            W@@@@@@(                 
       .@@@@@@@@@@@@@@@@@@@@@@P           d^`^w_    @J       .9            @@@@@@@(                
        ^@@@@@@@@@@@@@@@@@@@@B'          8     ^b   .$        .3           W@@@@@@#                
         .W@@@@@@@@@@@@@@@@@@B           f      .N( .#         .9          .@@@@@@@$               
            ^WW@@@@@@@WM* @@@$          .$        ^( ^$         .$          @@@@@@@#               
                 .``     @@@@$          .B         ^( ^(         #          @@@@@@@@J              
                         @@@@&           @(         m( N( @@@@&   [         @@@@@@@@[              
                         @@@@@)          .3          #  N_@@@@@#( ]        .@@@@@@@@[              
                         @@@@@&           .9     @@@& $  ^@@@@@@$ f        .^`^WW@@@[              
                         @@@@@@$           .9   @@@@@@@j  .W@@@@Bg`              W@@l              
                         .@@@@@@$           .R_ .@@@@@@[  ._@WMP^``               @B               
                          @@@@@@@&            ^k  W@@@@[w#"   &&                  @F               
                          .@@@@@@@@$            ^x_^WBP' @@@@@@@@@&(  .%g_.       @J               
                           .W@@@@@@@@(             ``  @@@@@@@@@@@@f    {^^"     @P                
                            .W@@@@@@@@@$             .@@@@@@@@@@@@B`    f       @P                 
                             .M@@@@@@@@@@g-          .W@@@@@@@@@B*     4       @P                  
                               ^W@@@@@@@f              ^MWWWMP^`     _8`     @B'                   
                                 ^W@@@@$          #                _@F    _@P_W)                   
                                   ^W@@$         .P%g_          _@M*  _r@#"@F`^M_                  
                                     .^Wg            .^Mmmmm@MPW$   _#P`F @f    ^b                 
                                        .W@g_            ___P   #@WP`  # @8      .N(               
                                         @J.^WW@@gg____@#*`P   .@g     8 @J       .@(              
                                         #       .Mj ^(@(        Wg   @f B         .B              
                                        .B         Wk %##mmg_     7$  @J B          W$             
                                        .@(        .@@Wmwg_ ^Mg    #  @j@Ba         .@(            
                                         @$        `      ^   ^B  @P  #  B'          W$            
                                          #(                   @@#f   B @'            B            
                                          @B(                 ]w`    @F@f_#          @F            
                                         @8^@(               g^     @P #f_@mmwg_     g'            
                                         B` .@g            @P`    _@F @@P`     ^M( W#'             
                                       @B`     Mg__    __@E_____@M" _@@f         @( B              
                                      @B`    .uu__""PPWB__  """ ._@W*@F# %(  $  #@(#`@(            
                                     @P          ^Mg    ^^MWWWMP^`  .f @J%$ @$  8^Wg  @(           
                                    @F             .M$               @P`^WMg_@@#'  ^Q( B           
                                   @f               _@J__            B    .__g___   .M(W$          
                                  @8            _@MP^^^^^Mwg        @$ ._P`     `^e_  #,@(         
                                  @[         _WP`          ^B(      .g             ^q .tWB         
                                 .@(        yf        .     .#       ^g             .9 4 #j        
                                  WB             __wMP^^*v   #'        %(            .t  @J        
                                   @L        ._w*`          @@@@@@@@@@@@@B(              @'        
                                    Wg %      `            @P            .Mg            @F         
                                      Ma@(              _@P`               ^@g        _@F          
                                       \.Wg         _@@M*                    ^Wgg___@@P`           
                                          WW@@@@WMP^`                          ````               



