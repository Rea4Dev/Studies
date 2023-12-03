int control = 0xFF; //* 255 or 11111111
//! 11111110
//! 11111100
//! 11111000
//! 11110000
//! 11100000
//! 11000000
//! 10000000
//! 00000000
//* LEDs will turn on here with low logical level
void main(){
     TRISB= 0;     //* set all B pins by digital output.
     PORTB = 0xFF; //* initializate all them by high logical level (1V)
     while(1){
              PORTB = control;
              delay_ms(300);

              control = control << 1;
              
              if(control == 0) control = 0xFF;
     }
}