/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 01 November 2018, 20:17
 */


#include <xc.h>
#include "config.h"
#include <stdbool.h>
#include "main.h"
#include "init_ports.h"
#include "state_machine.h"
void main(void) 
{
    
    init_ports();
    int led = 1;
    while(1)
    {                                                                                                                       
       PORTCbits.RC1 = 1;
       __delay_ms(500);
       PORTCbits.RC1 = 0;
       __delay_ms(500);
       // led = state_machine(&state);
     //   RC0 = led;
    }
    return;
}
