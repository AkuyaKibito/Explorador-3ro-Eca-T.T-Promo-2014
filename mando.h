#include <16F876A.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES PUT                   	//Power Up Timer
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4MHz)
#define camu	PIN_B3
#define camd	PIN_B4
#define camr	PIN_B5
#define caml	PIN_B6
#define temp	PIN_B7

#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8,stream=PORT1)

