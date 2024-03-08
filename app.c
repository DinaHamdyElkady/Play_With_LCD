/* LIB Layer */
#include "LIB/std_type.h"
#define F_CPU 8000000UL
#include <avr/delay.h>

/* MCAL */
#include "MCAL/MDIO_interface.h"

/* HAL */
#include "HAL/HLCD_interface.h"


int main(void)
{
	MDIO_u8Init();
	HLCD_voidInit();
	HLCD_u8SendCmnd(0x0C);  //HIDE CURSOR

	while(1)
	{

		HLCD_u8SetCursor(HLCD_u8_LINE_1, 0);
		HLCD_WriteString("Hi, I'm Dina");
		HLCD_u8SendCmnd(0x40);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00000100);
		HLCD_u8SendChar(0b00011111);
		HLCD_u8SendChar(0b00010101);
	    HLCD_u8SendChar(0b00001010);
		HLCD_u8SendChar(0b00010001);
		HLCD_u8SendChar(0b00010001);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 7);
		HLCD_u8SendChar(0);
		_delay_ms(1000);
		HLCD_u8SendCmnd(0x40);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00000101);
		HLCD_u8SendChar(0b00011111);
		HLCD_u8SendChar(0b00010100);
		HLCD_u8SendChar(0b00001010);
		HLCD_u8SendChar(0b00010001);
		HLCD_u8SendChar(0b00010001);
		_delay_ms(500);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 7);
		HLCD_u8SendChar(0);
		_delay_ms(1000);
		HLCD_u8SendCmnd(0x01);
		_delay_ms(1000);



		HLCD_u8SetCursor(HLCD_u8_LINE_1, 0);
		HLCD_WriteString("I can play");
		//GOAL
		HLCD_u8SendCmnd(0x40+16);
		HLCD_u8SendChar(0b00011111);
		HLCD_u8SendChar(0b00000101);
		HLCD_u8SendChar(0b00001011);
		HLCD_u8SendChar(0b00000101);
		HLCD_u8SendChar(0b00001011);
		HLCD_u8SendChar(0b00000101);
		HLCD_u8SendChar(0b00001011);
		HLCD_u8SendChar(0b00011111);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 11);
		HLCD_u8SendChar(2);
		//EL RAGEL
		HLCD_u8SendCmnd(0x40+32);
		HLCD_u8SendChar(0b00011100);
		HLCD_u8SendChar(0b00011100);
		HLCD_u8SendChar(0b00001000);
		HLCD_u8SendChar(0b00001000);
		HLCD_u8SendChar(0b00011000);
	    HLCD_u8SendChar(0b00001100);
	    HLCD_u8SendChar(0b00001100);
		HLCD_u8SendChar(0b00001100);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 7);
		HLCD_u8SendChar(4);
		_delay_ms(1000);
		HLCD_u8SendCmnd(0x40+32);
		HLCD_u8SendChar(0b00011100);
		HLCD_u8SendChar(0b00011100);
		HLCD_u8SendChar(0b00001000);
		HLCD_u8SendChar(0b00001000);
		HLCD_u8SendChar(0b00011000);
		HLCD_u8SendChar(0b00001100);
		HLCD_u8SendChar(0b00001010);
		HLCD_u8SendChar(0b00001001);

		HLCD_u8SetCursor(HLCD_u8_LINE_2, 7);
		HLCD_u8SendChar(4);
		//BALL
		HLCD_u8SendCmnd(0x40+48);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00001100);
		HLCD_u8SendChar(0b00011110);
		HLCD_u8SendChar(0b00011110);
		HLCD_u8SendChar(0b00001100);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 8);
		HLCD_u8SendChar(6);
		_delay_ms(80);
		//////
		HLCD_u8SendCmnd(0x40);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 8);
		HLCD_u8SendChar(0);
		///////
		_delay_ms(80);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 9);
		HLCD_u8SendChar(6);
		_delay_ms(80);
		HLCD_u8SendCmnd(0x40);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SendChar(0b00000000);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 9);
		HLCD_u8SendChar(0);
        /////////
		_delay_ms(80);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 10);
		HLCD_u8SendChar(6);
		_delay_ms(80);
		HLCD_u8SendChar(0);

		HLCD_u8SetCursor(HLCD_u8_LINE_2, 11);
		HLCD_u8SendChar(2);

		_delay_ms(1000);
		HLCD_u8SendCmnd(0x01);
		_delay_ms(500);



		HLCD_u8SetCursor(HLCD_u8_LINE_1, 0);
		HLCD_WriteString("I can dance");
		HLCD_u8SendCmnd(0x40);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00010101);
		HLCD_u8SendChar(0b00011111);
		HLCD_u8SendChar(0b00000100);
	    HLCD_u8SendChar(0b00001000);
		HLCD_u8SendChar(0b00001100);
		HLCD_u8SendChar(0b00010010);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 7);
		HLCD_u8SendChar(8);
		_delay_ms(1000);
		HLCD_u8SendCmnd(0x40);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00001110);
		HLCD_u8SendChar(0b00010101);
		HLCD_u8SendChar(0b00011111);
		HLCD_u8SendChar(0b00000100);
		HLCD_u8SendChar(0b00000010);
		HLCD_u8SendChar(0b00000110);
		HLCD_u8SendChar(0b00001001);
		_delay_ms(1000);
		HLCD_u8SetCursor(HLCD_u8_LINE_2, 7);
		HLCD_u8SendChar(8);
		_delay_ms(1000);
		HLCD_u8SendCmnd(0x01);
		_delay_ms(500);
	}


	return 0;
}
