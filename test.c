#include <reg51.h>
#include "lcd1602.h"

void main()
{
	lcd1602_init();
	lcd1602_display_switch(true,true,true);
	lcd1602_string_set(0,0,"hello,");
	lcd1602_string_set(4,1,"world!");
	while(1);
}
