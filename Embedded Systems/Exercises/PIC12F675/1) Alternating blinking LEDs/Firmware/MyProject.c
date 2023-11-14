void main() {
     ANSEL = 0; //* configuration to digital
     CMCON = 7; //just acept this one for while
     TRISIO0_bit = 0;     //* (registrator) digital output
     TRISIO1_bit = 0;     //* (registrator) digital output
     
     GPIO = 0;   //* all pins start with low logical level
     
     while(1){
              GPIO.F0 = 1;
              GPIO.F1 = 0;
              delay_ms(100);
              GPIO.F0 = 0;
              GPIO.F1 = 1;
              delay_ms(100);
     }
}