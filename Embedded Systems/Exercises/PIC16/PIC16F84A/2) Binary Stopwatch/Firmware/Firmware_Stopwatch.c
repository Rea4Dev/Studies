void main() {
        TRISB = 0b00000000;       //* set all B pins by digital output.
        PORTB = 0b00000000;       //* initializate all them by low logical level (0V)
        
          while(1){
          PORTB++; //* PORTB = PORTB + 1. Turning ON one by one
          delay_ms(1000);
          }
}