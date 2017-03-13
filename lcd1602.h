#ifndef LCD1602_H
#define LCD1602_H

typedef unsigned char uint8;
typedef unsigned char bool;
typedef unsigned int uint16;

#define true 1
#define false 0

sbit LCD1602_RS=P3^4;
sbit LCD1602_RW=P3^3;
sbit LCD1602_E=P3^2;

#define LCD1602_PORT P1

void lcd1602_init();

void lcd1602_display_switch(bool p_show_char,bool p_show_cursor,bool p_flash_cursor);

void lcd1602_cursor_shift(bool p_right);

void lcd1602_clear();

void lcd1602_cursor_return();

void lcd1602_char_set(uint8 p_x,uint8 p_y,char p_char);

void lcd1602_string_set(uint8 p_x,uint8 p_y,const char* p_string);

#endif
