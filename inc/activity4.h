
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#define BAUD 9600 // Set Baud value to 9600
#define BAUD_RATE ((F_CPU)/(BAUD*16UL)-1) // Macro to Set baudrate for UBRR
#define TRANSMITTING_DATA !(UCSR0A & (1<<UDRE0)) // Filling the Data to UDR0
#define Temperature UDR0 

void USARTInit(void);

void USARTWriteString(char);

#endif // ACTIVITY4_H_INCLUDED