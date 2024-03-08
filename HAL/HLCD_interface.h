#ifndef HLCD_INTERFACE_H
#define HLCD_INTERFACE_H

#define HLCD_u8_LINE_1  1
#define HLCD_u8_LINE_2  2


/*prototypes of LCD functions*/

//function to init LCD module
void HLCD_voidInit(void);

//function to send command to LCD
u8 HLCD_u8SendCmnd(u8 Copy_u8Cmnd);

//function to send a char to LCD
u8 HLCD_u8SendChar(u8 Copy_u8Char);

//function to set cursor
u8 HLCD_u8SetCursor(u8 Copy_u8LineNum, u8 Copy_u8CharNum);

//function to send a num to LCD
//void HLCD_u8SendNum(u16 Copy_u8Num);

u8 StringLength(u8* str);

u8 HLCD_WriteString(u8* Copy_String);

void HLCD_PrintSineWave(u8* Copy_Name);

void clear();





#endif
