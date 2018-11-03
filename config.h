/* 
 * File:   config.h
 * Author: Phil Glazzard
 *
 * Created on 01 November 2018, 20:16
 */

#ifndef CONFIG_H
#define	CONFIG_H

void config (void);

// PIC16F690 Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select bit (MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown-out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 4000000
enum state_machine {OFF, BOUNCING_ON, ON, BOUNCING_OFF};// OFF = 1, BOUNCING_ON = 1, ON = 2, BOUNCING_OFF = 3, data type is switch_state
enum state_machine state = OFF;     //  declare a variable  called 'state' of type 'state_machine'
                                    //  initial state of state machine after reset is OFF
enum button{DOWN, UP};              // button DOWN = 0, UP = 1
enum button butt = UP;
enum red_led{LOW, HIGH};              // red_led LOW = 0, HIGH = 1
enum red_led led = LOW;
#endif	/* CONFIG_H */

