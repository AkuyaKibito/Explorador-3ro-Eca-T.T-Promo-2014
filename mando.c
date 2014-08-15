#include <mando.h>
#define LCD_ENABLE_PIN PIN_B2
#define LCD_RS_PIN PIN_B0
#define LCD_RW_PIN PIN_B1
#define LCD_DATA4 PIN_C4
#define LCD_DATA5 PIN_C5
#define LCD_DATA6 PIN_C6
#define LCD_DATA7 PIN_C7

#include <lcd.c>

char  rec[6];
void main()
{
   lcd_init();
   while(TRUE)
   {
   //TODO: User Code
   if(input(camu)==1)
   {
   printf("cmu\r");
   delay_ms(250);
   }
   if(input(camd)==1)
   {
   printf("cmd\r");
   delay_ms(250);
   }
   if(input(camr)==1)
   {
   printf("cmr\r");
   delay_ms(250);
   }
   if(input(caml)==1)
   {
   printf("cml\r");
   delay_ms(250);
   }
   if(input(temp)==1)
   {
   printf("tmp\r");
   rec==gets(rec);
   printf(lcd_putc,"\f");
   printf(lcd_putc,"  Temperatura\n  %s Grados",rec);
   delay_ms(250);
   }
}
}
