int numbers;

void main(){
     //CMCON = 7;   //* turn off the internal comparators                       //! ignorable
     TRISA = 3;   //* 00000011 turning the first two A pins into digital input
     //TRISB = 0;   //* 00000000 turning all the B pins into digital output     //! ignorable
     
     //PORTA = 3;  //*  00000011 turning the first two A pins into HIGH         //! ignorable
     //PORTB = 0;  //*  00000000 turning all the B pins into LOW                //! ignorable
     
     
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