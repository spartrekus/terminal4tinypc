

#include<stdio.h>
#include<string.h>

int main( int argc, char *argv[])
{
    printf("Hello Bunny \n");

    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( ( strcmp( argv[1] , "play" ) ==  0 ) 
      || ( strcmp( argv[1] , "run" ) ==  0 )  )
      {
         system( " mplayer http://10.0.0.52/Documents/bigbunny.avi" );
         return 0;
      }



    ////////////////////////////////////////////////////////
    if ( argc == 2)
      if ( ( strcmp( argv[1] , "get" ) ==  0 ) 
      || ( strcmp( argv[1] , "wget" ) ==  0 )  )
      {
         system( " wget \"http://ia800201.us.archive.org/12/items/BigBuckBunny_328/BigBuckBunny.avi\" " );
         return 0;
      }



    return 0;

}


