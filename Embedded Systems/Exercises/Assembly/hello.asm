section .data ;! Where we put the "constants" (pointer)
    msg db "Hello World!", 0xA
    tam equ $- msg

section .bss ;! Where we put the "variables" (pointer)

section .text ;! Where our programins beggins

global _start 

_start: ;! pointer or label, any name.
    mov EAX, 0x4 ;* pointer informing that I'll send something to standart output
    mov EBX, 0x1 ;* folowwing EAX. Pointing to stardart output
    mov ECX, msg
    mov EDX, tam
    int 0x80 ;* execution order

    ;* to, from
    mov EAX, 0x1 ;* pointer, moving the value 1 to EAX. Finalizes the program
    mov EBX, 0x0 ;* pointer, moving the value 0 to EBX. Informing the return value.
    int 0x80 ;* execution order

;! Aseembly is not case sensitive



; nasm -f elf64 hello.asm

; "hello.o" file is the compiled program to machine language
; linkedition (ld) is transform the machine language program to an executable program

; ld -s -o hello hello.o
; ls (if is permited to execute, will apear in green)