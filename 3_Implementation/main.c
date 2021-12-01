#include"Test1.h"
#include"Test2.h"
#include"Test3.h"


#include"Test1.c"
#include"Test2.c"
#include"Test3.c"

#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief Main program to execute the Temperature Measurement System for Bus
 *
 * @return int
 */
int main(void)
{
    peripheralInit();
    Init_ADC();                                        //Intializing ADC(Analog to Digital convertor)
    TimerGenerator();                                  //Generates the Timer Wave
    UART_Init(103);                                    //Intializing UART
    uint16_t read;
    while(1)
    {
        if(!(PIND&(1<<PD0))&&!(PIND&(1<<PD1)))        //If both the switches are ON the LED glows
        {
            LED_ON;
            while(1)
            {
                read=Read_ADC(0);
                PWMOutput(read);                       //PWM Output of the given temperature input by ADC
                _delay_ms(200);
            }

        }
        else                                          //Even one switch is off the LED doesn't glow
        {
            OCR1A = 0;
            LED_OFF;
            _delay_ms(200);
        }
    }
    return 0;
}


