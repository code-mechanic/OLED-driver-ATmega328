/*
 * File:   oled_interface.c
 * Author: Mohan
 *
 * Created on November 27, 2019, 6:33 PM
 */

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include<util/delay.h>
#include"oledssd1306.h"

int main() 
{
  oledssd1306_init();
  oled_fill(BLACK);
  /*oled_logo();
  _delay_ms(5000);
  oled_fill(BLACK);
  oled_setfont(Font_12x16,12,16,32,126);
  oled_string("Counting..",0,0);*/
  oled_setfont(Segment_25x40,25,40,46,58);
  while(1)
  {
    for(int i=999;i>0;i--)
    {
      if(i<=0)
      {
        i=0;
      }
      oled_num(i,0,0);
      _delay_ms(50);
    }
  }
}
