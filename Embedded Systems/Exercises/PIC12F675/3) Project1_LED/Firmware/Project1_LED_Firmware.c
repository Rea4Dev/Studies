#define pin0 TRISIO0_bit
#define pin1 TRISIO1_bit
#define pin_LED1 TRISIO4_bit
#define pin_LED2 TRISIO5_bit

#define StatePin0 GPIO.F0
#define StatePin1 GPIO.F1
#define StateLED1 GPIO.F4
#define StateLED2 GPIO.F5
void main() {
           ANSEL = 0;
           CMCON = 7;
           
           pin0 = 1;
           pin1 = 1;
           pin_LED1 = 0;
           pin_LED2 = 0;
           
           GPIO = 0;

           while(1){ //* pin0 and pin1 has a pull-up resistor
                    if(StatePin0 == 0){
                        StateLED1 = 1;
                    }else{
                        StateLED1 = 0;
                    }
                    if(StatePin1 == 0){
                        StateLED2 = 1;
                    }else{
                        StateLED2 = 0;
                    }
           }
}
