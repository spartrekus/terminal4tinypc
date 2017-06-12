

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define PATH_MAX 250

int main( int argc, char *argv[])
{ 
    char cmdi[PATH_MAX];
    //if ( argc == 2)
    //if ( strcmp( argv[1] , "" ) !=  0 ) 
    {
       /*
         strncpy( cmdi, " find  " , PATH_MAX );
         strncat( cmdi , " -iname \"" , PATH_MAX - strlen(cmdi) - 1);
         strncat( cmdi , "*" , PATH_MAX - strlen(cmdi) - 1);
         strncat( cmdi , argv[1] , PATH_MAX - strlen(cmdi) - 1);
         strncat( cmdi , "*" , PATH_MAX - strlen(cmdi) - 1);
         strncat( cmdi , "\"  " , PATH_MAX - strlen(cmdi) - 1);
         system( cmdi );*/
         system( " ls -1 *.ps | while read -r i ; do echo \"Converting $i.\" ; ps2pdf \"$i\" ; done " );
         return 0;
    }
    return 0; 
}  



