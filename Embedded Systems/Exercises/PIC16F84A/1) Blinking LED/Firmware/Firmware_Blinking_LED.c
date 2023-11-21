void main() {
//* TRIS configures I/O. PORT interact with.
     TRISB = 0b00000000; //* set all B pins by digital output.
     PORTB = 0b00000000; //* initializate all them by low logical level (0V)
     
     while(1){
     RB1_bit = 1;
     delay_ms(1000);
     RB1_bit = 0;
     delay_ms(1000);
     }
}