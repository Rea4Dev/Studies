void main() {
     TRISB = 0b00000000; // * todos os pinos do PortB serao configurados como saida (OUTPUT).
     PORTB = 0b00000000; // * todos os pinos do PortB serao definidos como LOW (nivel logico baixo).

     while(1) {
              RB1_bit = 1; // * nivel logico da agora saida B1 passa a ser 1, emitindo tensao de 5V
              delay_ms(1000);
              RB1_bit = 0;
              delay_ms(1000);
     }
}