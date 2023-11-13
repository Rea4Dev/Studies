void main() {
           TRISB = 0b00000000; //*All B digital pins set by OUTPUT
           PORTB = 0b00000000; //*All B digital pins set to start with low logical level
           
           while(1){
           RB1_bit = 1;
           delay_ms(1000);
           RB1_bit = 0;
           delay_ms(1000);
           }
}