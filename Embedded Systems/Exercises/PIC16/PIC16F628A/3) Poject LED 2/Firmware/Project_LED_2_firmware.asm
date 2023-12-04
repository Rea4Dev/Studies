
_main:

;Project_LED_2_firmware.c,3 :: 		void main(){
;Project_LED_2_firmware.c,5 :: 		TRISA = 3;   //* 00000011 turning the first two A pins into digital input
	MOVLW      3
	MOVWF      TRISA+0
;Project_LED_2_firmware.c,12 :: 		while(1){
L_main0:
;Project_LED_2_firmware.c,13 :: 		numbers = rand();
	CALL       _rand+0
	MOVF       R0+0, 0
	MOVWF      _numbers+0
	MOVF       R0+1, 0
	MOVWF      _numbers+1
;Project_LED_2_firmware.c,15 :: 		RA2_bit = numbers;
	BTFSC      R0+0, 0
	GOTO       L__main12
	BCF        RA2_bit+0, BitPos(RA2_bit+0)
	GOTO       L__main13
L__main12:
	BSF        RA2_bit+0, BitPos(RA2_bit+0)
L__main13:
;Project_LED_2_firmware.c,17 :: 		RA3_bit = ~RA2_bit;
	BTFSC      RA2_bit+0, BitPos(RA2_bit+0)
	GOTO       L__main14
	BSF        RA3_bit+0, BitPos(RA3_bit+0)
	GOTO       L__main15
L__main14:
	BCF        RA3_bit+0, BitPos(RA3_bit+0)
L__main15:
;Project_LED_2_firmware.c,19 :: 		while(RA2_bit){
L_main2:
	BTFSS      RA2_bit+0, BitPos(RA2_bit+0)
	GOTO       L_main3
;Project_LED_2_firmware.c,20 :: 		if(RA0_bit == 0) RA2_bit = 0;
	BTFSC      RA0_bit+0, BitPos(RA0_bit+0)
	GOTO       L_main4
	BCF        RA2_bit+0, BitPos(RA2_bit+0)
L_main4:
;Project_LED_2_firmware.c,21 :: 		delay_ms(70);
	MOVLW      182
	MOVWF      R12+0
	MOVLW      208
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	NOP
;Project_LED_2_firmware.c,22 :: 		}
	GOTO       L_main2
L_main3:
;Project_LED_2_firmware.c,24 :: 		while(RA3_bit){
L_main6:
	BTFSS      RA3_bit+0, BitPos(RA3_bit+0)
	GOTO       L_main7
;Project_LED_2_firmware.c,25 :: 		if(RA1_bit == 0) RA3_bit = 0;
	BTFSC      RA1_bit+0, BitPos(RA1_bit+0)
	GOTO       L_main8
	BCF        RA3_bit+0, BitPos(RA3_bit+0)
L_main8:
;Project_LED_2_firmware.c,26 :: 		delay_ms(70);
	MOVLW      182
	MOVWF      R12+0
	MOVLW      208
	MOVWF      R13+0
L_main9:
	DECFSZ     R13+0, 1
	GOTO       L_main9
	DECFSZ     R12+0, 1
	GOTO       L_main9
	NOP
;Project_LED_2_firmware.c,27 :: 		}
	GOTO       L_main6
L_main7:
;Project_LED_2_firmware.c,29 :: 		delay_ms(70);
	MOVLW      182
	MOVWF      R12+0
	MOVLW      208
	MOVWF      R13+0
L_main10:
	DECFSZ     R13+0, 1
	GOTO       L_main10
	DECFSZ     R12+0, 1
	GOTO       L_main10
	NOP
;Project_LED_2_firmware.c,31 :: 		}
	GOTO       L_main0
;Project_LED_2_firmware.c,32 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
