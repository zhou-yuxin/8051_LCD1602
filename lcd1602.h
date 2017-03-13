#ifndef LCD1602_H
#define LCD1602_H

#include <reg51.h>

typedef unsigned char uint8;
typedef unsigned char bool;
typedef unsigned int uint16;

#define true 1
#define false 0

//the pin connected to RS
sbit LCD1602_RS=P3^4;
//the pin connected to RW
sbit LCD1602_RW=P3^3;
//the pin connected to E
sbit LCD1602_E=P3^2;

//the 8-bit port connected to D0~D7
#define LCD1602_PORT P1

//init
//初始化为16×2字符，每个字符5×8点阵的形式
void lcd1602_init();

//tun on/off the display of character, the display of cursor and the flash of cursor
//显示/隐藏字符、显示/隐藏光标、闪烁/静止光标
void lcd1602_display_switch(bool p_show_char,bool p_show_cursor,bool p_flash_cursor);

//move the cursor to left or right (one character)
//向左/向右移动光标
void lcd1602_cursor_shift(bool p_right);

//clear the screen
//清屏
void lcd1602_clear();

//reset the cursor the the left-top of screen
//光标归位
void lcd1602_cursor_return();

//set a character at the given position
//在指定坐标设置字符（p_x=0~15,p_y=0~1）
void lcd1602_char_set(uint8 p_x,uint8 p_y,char p_char);

//write a string from the given position
//从指定位置开始设置字符串（p_x=0~15，p_y=0~1，p_string必须是以0结尾的字符串）
void lcd1602_string_set(uint8 p_x,uint8 p_y,const char* p_string);

#endif
