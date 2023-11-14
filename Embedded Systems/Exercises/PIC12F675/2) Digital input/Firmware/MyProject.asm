
_main:

;MyProject.c,1 :: 		void main() {
;MyProject.c,2 :: 		ANSEL = 0x00; //all inputs by digital
	CLRF       ANSEL+0
;MyProject.c,3 :: 		CMCON = 7; //turn off the internal comparators
	MOVLW      7
	MOVWF      CMCON+0
;MyProject.c,5 :: 		TRISIO0_bit = 1; //set by digital input
	BSF        TRISIO0_bit+0, BitPos(TRISIO0_bit+0)
;MyProject.c,6 :: 		TRISIO1_bit = 0; //set by digital output to the led
	BCF        TRISIO1_bit+0, BitPos(TRISIO1_bit+0)
;MyProject.c,8 :: 		GPIO = 0;      //all pins start with low logical lvl
	CLRF       GPIO+0
;MyProject.c,10 :: 		while(1){
L_main0:
;MyProject.c,11 :: 		if (GPIO.F0 == 1){     //you also can not put the == 1
	BTFSS      GPIO+0, 0
	GOTO       L_main2
;MyProject.c,12 :: 		GPIO.F1 = 1;
	BSF        GPIO+0, 1
;MyProject.c,13 :: 		delay_ms(2000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
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
;MyProject.c,14 :: 		}
	GOTO       L_main4
L_main2:
;MyProject.c,16 :: 		GPIO.F1 = 0;
	BCF        GPIO+0, 1
;MyProject.c,17 :: 		}
L_main4:
;MyProject.c,18 :: 		}
	GOTO       L_main0
;MyProject.c,19 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
