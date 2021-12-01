#ifndef LED_H_INCLUDED

#define LED_H_INCLUDED

#define read_D PIND

/** brief contains io header to declare ports and registers
 */

/** brief LED connected to PORT B1 will glow
 */
 
void LED_PORTB1_HIGH(void);

/** brief LED connected to PORT B1 will turn low
 *
 *
 */

void LED_PORTB1_LOW(void);
/**
 * @brief Initialise of input output ports
 * 
 */
 
void initialise_ports_a1(void);

void LED_PORTC2_HIGH(void);

void LED_PORTC2_LOW(void);

#endif // LED_H_INCLUDED
