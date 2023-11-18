void main() {
     ANSEL = 0; //* all analog pin functions off. Pins now will be digital I/O.
     CMCON = 7; //* turn off the internal comparators. 7" in binary (111 in binary) sets all bits related to the comparators (C0, C1, C2) to "1", Indicating that they are disabled. The internal comparators are used to perform analog comparisons between two signals. Turning them off can be important in situations where you are dealing only with digital signals or are not interested in analog comparison functionalities. You are disabling all of the PIC12F675's internal comparators, ensuring that they do not interfere with your digital operations.

     //* TRISIO configure I/O. GPIO interact with

     TRISIO0_bit = 0;     //* set by digital output. You can controll it by 1 and 0.
     TRISIO1_bit = 0;     //* set by digital output. You can controll it by 1 and 0.

     GPIO = 0;   //* all pins start with 0

     while(1){
              GPIO.F0 = 1;
              GPIO.F1 = 0;
              delay_ms(100);
              GPIO.F0 = 0;
              GPIO.F1 = 1;
              delay_ms(100);
     }
}