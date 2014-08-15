#include <main.h>
#include <string.h>
float anread,antx;
char rec[4];
char cm1[4]="cmu";
char cm2[4]="cmd";
char cm3[4]="cmr";
char cm4[4]="cml";
char cm5[4]="tmp";
int  cmplimit=4;
void main()
{
   output_low(PIN_A1);
   output_low(PIN_A2);
   setup_adc(ADC_CLOCK_INTERNAL);
   setup_adc_ports(AN0);
   while(TRUE)
   {
      gets(rec);
      //TODO: User Code
      if(strncmp(rec,cm1,cmplimit)==0){
      output_high(PIN_A1);
      delay_ms(2);
      output_low(PIN_A1);
      delay_ms(48);
      rec="000";
      }
      if(strncmp(rec,cm2,cmplimit)==0){
      output_high(PIN_A1);
      delay_ms(1);
      output_low(PIN_A1);
      delay_ms(49);
      rec="000";
      }
      if(strncmp(rec,cm3,cmplimit)==0){
      output_high(PIN_A2);
      delay_ms(2);
      output_low(PIN_A2);
      delay_ms(48);
      rec="000";
      }
      if(strncmp(rec,cm4,cmplimit)==0){
      output_high(PIN_A2);
      delay_ms(1);
      output_low(PIN_A2);
      delay_ms(49);
      rec="000";
      }
      if(strncmp(rec,cm5,cmplimit)==0){
      anread = read_adc();
      delay_ms(100);
      antx = (anread/2.0532);
      printf("%.2f\r",antx);
      delay_ms(250);
      rec="000";
      }
   }
}
