
#include <stdio.h> 
#include <stdlib.h> 

int main()
{ 
    printf( "TERMINAL4PI TEMPERATURE \n" ); 
    system( " echo $(( `cat /sys/class/thermal/thermal_zone0/temp ` / 1000 )) "       );
    return 0; 
}  


