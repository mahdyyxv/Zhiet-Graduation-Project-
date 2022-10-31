/*
 * Registers.h
 *
 * Created: 10/31/2022 8:16:41 PM
 *  Author: mahdy
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
/************************************************** INCLUDES **************************************************/
#include "BitMath.h"

/************************************************** DIO **************************************************/

#define     _PINA         *(volatile u8*)0x39
#define     _DDRA         *(volatile u8*)0x3A
#define     _PORTA        *(volatile u8*)0x3B

#define     _PINB         *(volatile u8*)0x36
#define     _DDRB         *(volatile u8*)0x37
#define     _PORTB        *(volatile u8*)0x38

#define     _PINC         *(volatile u8*)0x33
#define     _DDRC         *(volatile u8*)0x34
#define     _PORTC        *(volatile u8*)0x35

#define     _PIND         *(volatile u8*)0x30
#define     _DDRD         *(volatile u8*)0x31
#define     _PORTD        *(volatile u8*)0x32

#define     _PINE         *(volatile u8*)0x21
#define     _DDRE         *(volatile u8*)0x22
#define     _PORTE        *(volatile u8*)0x23

#define     _PINF         *(volatile u8*)0x20
#define     _DDRF         *(volatile u8*)0x61
#define     _PORTF        *(volatile u8*)0x62

#define     _PING         *(volatile u8*)0x63
#define     _DDRG         *(volatile u8*)0x64
#define     _PORTG        *(volatile u8*)0x65

/************************************************** UART0 **************************************************/

#define     _UBRR0L         *(volatile u8*)0x29
#define     _UBRR0H         *(volatile u8*)0x90
#define     _UCSR0B         *(volatile u8*)0x2A
#define     _UDR0           *(volatile u8*)0x2C
#define     _UCSR0A         *(volatile u8*)0x2B
#define     _UCSR0C         *(volatile u8*)0x95

/************************************************** UART1 **************************************************/

#define     _UBRR1L         *(volatile u8*)0x99
#define     _UBRR1H         *(volatile u8*)0x98
#define     _UCSR1B         *(volatile u8*)0x9A
#define     _UDR1           *(volatile u8*)0x9C
#define     _UCSR1A         *(volatile u8*)0x9B
#define     _UCSR1C         *(volatile u8*)0x9D



#endif /* REGISTERS_H_ */