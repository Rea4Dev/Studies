void main() {
//*        RB  76543210
     TRISB = 0b00000000;
     PORTB = 0b00000000;
     
     while(1)
     {
       PORTB++; //* PORTB = PORTB + 1
       delay_ms(1000);
     }
}