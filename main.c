/*
 * GccApplication1.c
 *
 * Created: 4/20/2020 1:47:57 PM
 * Author : jgan6184
 */ 

#include <avr/io.h> // header file file for input output pins
#include <util/delay.h> // header file for delay.


int main (void)
{
	/* set pin 2,1,0 of PORTB AND set pin 7,6,5,4,3,2 of PortD for output for Cathodes*/
	DDRB |= _BV(DDB2);
	DDRB |= _BV(DDB1);
	DDRB |= _BV(DDB0);
	DDRD |= _BV(DDD7);
	DDRD |= _BV(DDD6);
	DDRD |= _BV(DDD5);
	DDRD |= _BV(DDD4);
	DDRD |= _BV(DDD3);
	DDRD |= _BV(DDD2);
	
	/* set pin 3,4,5 of PORTB for output for Anodes */
	DDRB |= _BV(DDB3);
	DDRB |= _BV(DDB4);
	DDRB |= _BV(DDB5);

int floor3off(){
			/* set pin 5 High to turn off floor 3 */
			PORTB |= _BV(PORTB5);
		}
	
		int floor2off(){
			/* set pin 4 High to turn off floor 2 */
			PORTB |= _BV(PORTB4);
		}
		
		int floor1off(){
			/* set pin 4 High to turn off floor 2 */
			PORTB |= _BV(PORTB3);
		}
		
		int floor1on(){
			PORTB &= ~_BV(PORTB3);
		}
		
		int floor2on(){
			PORTB &= ~_BV(PORTB4);
		}
		
		int floor3on(){
			PORTB &= ~_BV(PORTB5);
		}
		
		int light1on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTB |= _BV(PORTB2);
		} 
		
		int light1off(){
			/* set pin 2 low to turn led off */
			PORTB &= ~_BV(PORTB2);
		}
		
		int light2on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTB |= _BV(PORTB1);
		} 
		
		int light2off(){
			/* set pin 2 low to turn led off */
			PORTB &= ~_BV(PORTB1);
		}
		
		
		int light3on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTB |= _BV(PORTB0);
		} 
		
		int light3off(){
			/* set pin 2 low to turn led off */
			PORTB &= ~_BV(PORTB0);
		}
		
		
		int light4on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTD |= _BV(PORTD7);
		} 
		
		int light4off(){
			/* set pin 2 low to turn led off */
			PORTD &= ~_BV(PORTD7);
		}
		
		int light5on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTD |= _BV(PORTD6);
		} 
		
		int light5off(){
			/* set pin 2 low to turn led off */
			PORTD &= ~_BV(PORTD6);
		}
		
		
		int light6on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTD |= _BV(PORTD5);
		} 
		
		int light6off(){
			/* set pin 2 low to turn led off */
			PORTD &= ~_BV(PORTD5);
		}
		
		
		int light7on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTD |= _BV(PORTD4);
		} 
		
		int light7off(){
			/* set pin 2 low to turn led off */
			PORTD &= ~_BV(PORTD4);
		}
		
		int light8on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTD |= _BV(PORTD3);
		} 
		
		int light8off(){
			/* set pin 2 low to turn led off */
			PORTD &= ~_BV(PORTD3);
		}
		
		int light9on() {
			/* Light 1 Floor 1 set pin 2 high to turn led on */
			PORTD |= _BV(PORTD2);
		} 
		
		int light9off(){
			/* set pin 2 low to turn led off */
			PORTD &= ~_BV(PORTD2);
		}

		




	while(1) {
		floor2off();
		floor3off();
		
		/* Floor 1 */
		floor1on();
		
		light1on();
		_delay_ms(1000); //delay 1 second
		
		light2on();
		_delay_ms(1000); //delay 1 second

		light3on();
		_delay_ms(1000); //delay 1 second
		
		light4on();
		_delay_ms(1000); //delay 1 second

		light5on();
		_delay_ms(1000); //delay 1 second

		light6on();
		_delay_ms(1000); //delay 1 second

		light7on();
		_delay_ms(1000); //delay 1 second

		light8on();
		_delay_ms(1000); //delay 1 second

		light9on();
		_delay_ms(1000); //delay 1 second
		
		
		
		
		/* Floor 2 */
		floor2on();
		
		light1off();
		light1on();
		_delay_ms(1000); //delay 1 second
		
		light2off();
		light2on();
		_delay_ms(1000); //delay 1 second

		light3off();
		light3on();
		_delay_ms(1000); //delay 1 second
		
		light4off();
		light4on();
		_delay_ms(1000); //delay 1 second

		light5off();
		light5on();
		_delay_ms(1000); //delay 1 second

		light6off();
		light6on();
		_delay_ms(1000); //delay 1 second

		light7off();
		light7on();
		_delay_ms(1000); //delay 1 second
		
		light8off();
		light8on();
		_delay_ms(1000); //delay 1 second

		light9off();
		light9on();
		_delay_ms(1000); //delay 1 second
		
	
		
		/* Floor 3 */
		floor3on();
		light1on();
		_delay_ms(1000); //delay 1 second
		
		light2on();
		_delay_ms(1000); //delay 1 second

		light3on();
		_delay_ms(1000); //delay 1 second
		
		light4on();
		_delay_ms(1000); //delay 1 second

		light5on();
		_delay_ms(1000); //delay 1 second

		light6on();
		_delay_ms(1000); //delay 1 second

		light7on();
		_delay_ms(1000); //delay 1 second

		light8on();
		_delay_ms(1000); //delay 1 second

		light9on();
		_delay_ms(1000); //delay 1 second
		
		
		floor1off();
		floor2off();
		floor3off();
		light1off();
		light2off();
		light3off();
		light4off();
		light5off();
		light6off();
		light7off();
		light8off();
		light9off();

		/* Middle Light*/
		floor2on();
		light5on();
		_delay_ms(10000); //delay 1 second

		/* 420 */
		floor1on();
		
		/* Rain Animation */
		



	}
}

