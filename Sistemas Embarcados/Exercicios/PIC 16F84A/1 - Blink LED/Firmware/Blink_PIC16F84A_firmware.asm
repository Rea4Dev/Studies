
_main:

;Blink_PIC16F84A_firmware.c,1 :: 		void main() {
;Blink_PIC16F84A_firmware.c,2 :: 		TRISB = 0b00000000;
	CLRF       TRISB+0
;Blink_PIC16F84A_firmware.c,3 :: 		PORTB = 0b00000000;
	CLRF       PORTB+0
;Blink_PIC16F84A_firmware.c,5 :: 		while(1) {
L_main0:
;Blink_PIC16F84A_firmware.c,6 :: 		RB1_bit = 1;
	BSF        RB1_bit+0, BitPos(RB1_bit+0)
;Blink_PIC16F84A_firmware.c,7 :: 		delay_ms(1000);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;Blink_PIC16F84A_firmware.c,8 :: 		RB1_bit = 0;
	BCF        RB1_bit+0, BitPos(RB1_bit+0)
;Blink_PIC16F84A_firmware.c,9 :: 		delay_ms(1000);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
	NOP
;Blink_PIC16F84A_firmware.c,10 :: 		}
	GOTO       L_main0
;Blink_PIC16F84A_firmware.c,11 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
