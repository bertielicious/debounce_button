#include "config.h"
int state_machine(int *condition)
{

    switch (*condition)
    {
        case OFF:
        {
            if(butt == UP)
            {
                led = LOW;
                state = OFF;
            }
            else if (butt == DOWN)
            {
                led = LOW;
                state = BOUNCING_ON;
            }
        }
        break;
    
    case BOUNCING_ON:
    {
        if(butt == UP)
        {
            led  = LOW;
            state = OFF;
        }
        else if (butt == DOWN)
        {
            led = HIGH;
            state = ON;
        }
    }
        break;
    
        case ON:
        {
            if (butt = UP)
            {
                led = HIGH;
                state = ON;
            }
            else if(butt == DOWN)
            {
                led = LOW;
                state = BOUNCING_OFF;
            }
        }
        break;
        
    case BOUNCING_OFF:
    {
        if (butt == UP)
        {
            led = LOW;
            state = ON;
        }
        else if (butt == DOWN)
        {
            led = LOW;
            state = OFF;
        }
    }
    break;
}
    return led;
}
