void main() {
          ANSEL = 0x00; //all inputs by digital
          CMCON = 7; //turn off the internal comparators

          TRISIO0_bit = 1; //set by digital input
          TRISIO1_bit = 0; //set by digital output to the led
          
          GPIO = 0;      //all pins start with low logical lvl

          while(1){
                   if (GPIO.F0 == 1){     //you also can not put the == 1
                       GPIO.F1 = 1;
                       delay_ms(2000);
                   }
                   else{
                        GPIO.F1 = 0;
                   }
          }
}