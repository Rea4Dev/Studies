#line 1 "C:/Users/rea4d/OneDrive/Documentos/GitHub/Studies/Sistemas Embarcados/Blink_PIC16F84A_firmware.c"
void main() {
 TRISB = 0b00000000;
 PORTB = 0b00000000;

 while(1) {
 RB1_bit = 1;
 delay_ms(1000);
 RB1_bit = 0;
 delay_ms(1000);
 }
}
