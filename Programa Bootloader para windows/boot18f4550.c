#include <18f4550.h>                               // declarando pic 18f
#fuses hspll, nowdt,noprotect,nolvp,nodebug,usbdiv,pll5,cpudiv1,novregen
#use delay(clock=48M)   
//#include <usb_bootloader.h> 
#build (reset=0x1000,interrupt=0x1008)
#org 0x0000,0x0FFF{}
//#define _bootloader
/*#define LOADER_END 0x7FF
#define LOADER_SIZE 0x6FF
#build(reset=LOADER_END+1, interrupt=LOADER_END+9)
#org 0, LOADER_END {} // nothing will replace the bootloader memory space
// END OF bootloader definition*/


void main() {

while (true)  
{
   output_high(PIN_A0);
   delay_ms(1000);
   output_low(PIN_A0);
   delay_ms(1000);
}
}

