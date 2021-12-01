#ifndef __Test1_H_
#define __Test1_H_
/**
 * @file Test1.h
 * @author Pitambar
 * @brief Test_1
 * @version 0.1
 * @date 2021-12-01
 *
 * @copyright Copyright (c) 2021
 *
 */



/**
 * Include files
 */
#include <avr/io.h>
#include "Check1.h"

//Macro definition

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SENSOR_ON !(PIND&(1<<PD1)) // Switch1 ON
#define HEAT_ON !(PIND&(1<<PD4)) // Switch2 ON

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 *
 * @param state Pin level to which the LED Pin should be set
 */
void ledstat(uint8_t state);
void InitLED(void);

#endif /** __Check1_H_ */
