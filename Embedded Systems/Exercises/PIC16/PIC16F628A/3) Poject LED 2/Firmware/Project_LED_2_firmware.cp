#line 1 "C:/Users/rea4d/OneDrive/Documentos/GitHub/Studies/Embedded Systems/Exercises/PIC16/PIC16F628A/3) Poject LED 2/Firmware/Project_LED_2_firmware.c"
int numbers;

void main(){

 TRISA = 3;






 while(1){
 numbers = rand();

 RA2_bit = numbers;

 RA3_bit = ~RA2_bit;

 while(RA2_bit){
 if(RA0_bit == 0) RA2_bit = 0;
 delay_ms(70);
 }

 while(RA3_bit){
 if(RA1_bit == 0) RA3_bit = 0;
 delay_ms(70);
 }

 delay_ms(70);

 }
}
