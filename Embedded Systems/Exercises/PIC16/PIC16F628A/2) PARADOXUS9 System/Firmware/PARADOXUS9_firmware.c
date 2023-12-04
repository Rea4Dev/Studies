void main() {
     CMCON = 7;    //* turn off the internal comparators.
     TRISB = 0;   //* set all B pins by digital output.
     PORTB = 0;   //* initializate all them by low logical level.
     TRISA = 3;  //* 0b00000011 set all A pins by digital input, detecting only two states 0/1.
     
     while(1){
              if(RA0_bit == 0){
                  while(1){
                           RB0_bit = 1;
                           RB1_bit = 0;
                           delay_ms(500);
                           RB0_bit = 0;
                           RB1_bit = 1;
                           delay_ms(500);
                  }
              }
              
              if(RA1_bit == 0){
                  while(1){
                           RB0_bit = 1;
                           RB1_bit = 1;
                           delay_ms(500);
                           RB0_bit = 0;
                           RB1_bit = 0;
                           delay_ms(500);
                  }
              }
     }
}