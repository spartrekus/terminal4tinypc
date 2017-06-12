
#include <stdio.h> 
#include <stdlib.h> 

  /*
   The introduction says that it needs at least 2.5A@5V
   However, I get only a 1.5A cellphone charger… will it works fine?
      https://www.modmypi.com/blog/how-do-i-power-my-raspberry-pi
   */
int main()
{ 
    printf( "TERMINAL4PI INFO AND POWER \n" ); 
    system( " vcgencmd measure_temp ;   vcgencmd get_config int ;  vcgencmd get_mem arm && vcgencmd get_mem gpu ;   vcgencmd measure_volts core  ;   vcgencmd measure_volts sdram_c  ;  vcgencmd measure_volts sdram_i    ;  vcgencmd measure_temp  " );
    // http://www.elinux.org/RPI_vcgencmd_usage
    return 0; 
}  


