#include "main.h"

/**
 * number_pro - helper function to print # input using _putchar
 * @dude: input number
 * Return: void
 */
void number_pro(int dude)
{
	/* as long as input value is divisible by 10 */
	if (dude / 10)
		/* call this function recursively */
		number_pro(dude / 10);
	/* write tenths digit to stdout for each recursion */
	/* 0 added to result in order to write the digit properly */
	_putchar(dude % 10 + '0');
}
