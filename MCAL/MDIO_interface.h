#ifndef  MDIO_INTERFACE_H
#define  MDIO_INTERFACE_H

/* public macros*/

/*macros for port id*/
#define MDIO_u8_PORTA  0
#define MDIO_u8_PORTB  1
#define MDIO_u8_PORTC  2
#define MDIO_u8_PORTD  3

/*macros for pin id*/
#define MDIO_u8_PIN_0  0
#define MDIO_u8_PIN_1  1
#define MDIO_u8_PIN_2  2
#define MDIO_u8_PIN_3  3
#define MDIO_u8_PIN_4  4
#define MDIO_u8_PIN_5  5
#define MDIO_u8_PIN_6  6
#define MDIO_u8_PIN_7  7

/*macros for pin direction*/
#define MDIO_u8_INPUT_FLOATING  0
#define MDIO_u8_OUTPUT  1
#define MDIO_u8_INPUT_PULLED_UP 2

/*macros for pin value*/
#define MDIO_u8_LOW   0
#define MDIO_u8_HIGH  1







/* prototypes of public interfaces*/

/* Function to initialize the direction and values of pins */
u8 MDIO_u8Init(void);

/* function to set direction of pin*/
u8 MDIO_u8SetPinDirection (u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PinDirection);

/* function to set pin value*/
u8 MDIO_u8SetPinValue (u8 Copy_u8PortId,u8 Copy_u8PinId,u8 Copy_u8PinValue);

/* function to get pin value*/
u8 MDIO_u8GetPinValue (u8 Copy_u8PortId,u8 Copy_u8PinId,u8 *Copy_Pu8PinValue);

/* function to set direction of port*/
u8 MDIO_u8SetPortDirection (u8 Copy_u8PortId,u8 Copy_u8PortDirection);

/* function to set port value*/
u8 MDIO_u8SetPortValue (u8 Copy_u8PortId,u8 Copy_u8PortValue);

/* function to get port value*/
u8 MDIO_u8GetPortValue (u8 Copy_u8PortId,u8 *Copy_Pu8PortValue);






#endif
