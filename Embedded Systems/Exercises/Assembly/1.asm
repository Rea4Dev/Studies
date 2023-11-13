section .data //onde colocamos constantes

section .bss //onde colocamos nossas variáveis

section .text //onde de fato começa nosso programa
global _start //precisa ter e desse jeito
_start: //n precisa ser esse nome e em assambly não é case sensitive
    ;*destino(registrador). origem(hexa)
    mov EAX. 0x1 ;! SO estou terminando o programa.
    mov EBX. 0x0 ;! SO, o valor de retorno é 0.
    int 0x80 ;*pega todas as informações e executa