//lib layer
#include "../LIB/std_type.h"
#define F_CPU 8000000UL
#include <avr/delay.h>
//MCAL layer
#include "../MCAL/MDIO_interface.h"
//HAL layer
#include "HLCD_interface.h"
#include "HLCD_config.h"
#include "HLCD_private.h"


//function to init LCD module
void HLCD_voidInit(void){
	_delay_ms(31);
	//function set command
	HLCD_u8SendCmnd(0x38);
	_delay_ms(40);
	//display on off control
	HLCD_u8SendCmnd(0x0F);
	_delay_ms(40);
	//display char
	HLCD_u8SendCmnd(0x01);
    _delay_ms(2);
    //entry mode set
    HLCD_u8SendCmnd(0x06);



}

//function to send command to LCD
 u8 HLCD_u8SendCmnd(u8 Copy_u8Cmnd){
	u8 Local_u8ErrorState = STD_TYPE_OK;
	//1- set Rs pin => LOW (command)
	MDIO_u8SetPinValue(HLCD_u8_RS_PORT,HLCD_u8_RS_PIN,MDIO_u8_LOW);
	//2- set Rw pin => LOW (write)
	MDIO_u8SetPinValue(HLCD_u8_RW_PORT,HLCD_u8_RW_PIN,MDIO_u8_LOW);
	//3- send command to LCD on data pins
	MDIO_u8SetPortValue(HLCD_u8_DATA_PORT,Copy_u8Cmnd);
	//4- set enable pulse
	MDIO_u8SetPinValue(HLCD_u8_EN_PORT,HLCD_u8_EN_PIN,MDIO_u8_HIGH);
	_delay_us(1);
	MDIO_u8SetPinValue(HLCD_u8_EN_PORT,HLCD_u8_EN_PIN,MDIO_u8_LOW);
	return Local_u8ErrorState;
}

//function to send a char to LCD
u8 HLCD_u8SendChar(u8 Copy_u8Char){
u8 Local_u8ErrorState = STD_TYPE_OK;
	//1- set RS pin => High (command)
	MDIO_u8SetPinValue(HLCD_u8_RS_PORT,HLCD_u8_RS_PIN,MDIO_u8_HIGH);
	//2- set RW pin => LOW (write)
	MDIO_u8SetPinValue(HLCD_u8_RW_PORT,HLCD_u8_RW_PIN,MDIO_u8_LOW);
	//3- send command to LCD on data pins
	MDIO_u8SetPortValue(HLCD_u8_DATA_PORT,Copy_u8Char);
	//4- set enable pulse
		MDIO_u8SetPinValue(HLCD_u8_EN_PORT,HLCD_u8_EN_PIN,MDIO_u8_HIGH);
		_delay_us(1);
		MDIO_u8SetPinValue(HLCD_u8_EN_PORT,HLCD_u8_EN_PIN,MDIO_u8_LOW);
		return Local_u8ErrorState;
	}

//function to send number to LCD
/*u8 HLCD_u8SendNum(u8 Copy_u8Num)
{
	u8 Local_u8ErrorState = STD_TYPE_OK;
		//1- set RS pin => High (command)
		MDIO_u8SetPinValue(HLCD_u8_RS_PORT,HLCD_u8_RS_PIN,MDIO_u8_HIGH);
		//2- set RW pin => LOW (write)
		MDIO_u8SetPinValue(HLCD_u8_RW_PORT,HLCD_u8_RW_PIN,MDIO_u8_LOW);
		//3- send command to LCD on data pins
		MDIO_u8SetPortValue(HLCD_u8_DATA_PORT,Copy_u8Num);
		//4- set enable pulse
			MDIO_u8SetPinValue(HLCD_u8_EN_PORT,HLCD_u8_EN_PIN,MDIO_u8_HIGH);
			_delay_us(1);
			MDIO_u8SetPinValue(HLCD_u8_EN_PORT,HLCD_u8_EN_PIN,MDIO_u8_LOW);
			return Local_u8ErrorState;
}*/


//function to set cursor
u8 HLCD_u8SetCursor(u8 Copy_u8LineNum, u8 Copy_u8CharNum)
{
	u8 Local_u8ErrorState = STD_TYPE_OK;
	switch(Copy_u8LineNum)
	{
	case HLCD_u8_LINE_1: HLCD_u8SendCmnd(0x80 + Copy_u8CharNum); break;
	case HLCD_u8_LINE_2: HLCD_u8SendCmnd(0xC0 + Copy_u8CharNum); break;
	default: Local_u8ErrorState = STD_TYPE_NOK;
	}
	return Local_u8ErrorState;
}

//function to write a string
u8 StringLength(u8* str)
{
	u8 i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

u8 HLCD_WriteString(u8* Copy_String)
{
	u8 Local_u8ErrorState = STD_TYPE_OK;
	/* Local loop index */
	// u8 u8Index = 0;
	u8 iteration = 0;
	for(iteration = 0; iteration < StringLength(Copy_String); iteration++)
	{
		// write character on LCD
		HLCD_u8SendChar(Copy_String[iteration]);
		// increment local loop index
		// u8Index++;
		//delay to let the LCD show the char
		_delay_ms(2);
	}
	return Local_u8ErrorState;
}

/*void HLCD_PrintSineWave(u8* Copy_Name)
{
	u8 arr[100];

}*/
/*void HLCD_u8SendNum(u16 Copy_u8Num){

 }*/


