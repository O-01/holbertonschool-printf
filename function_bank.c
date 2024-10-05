#include "main.h"

/**
 * c_printer - supplies char output to _printf upon %c specifier
 * @dude: input char
 * Return: void
 */
int c_printer(va_list dude)
{
	/* declares/initializes ch to next int argument in va_list */
	int ch = va_arg(dude, int);

	/* writes ch to stdout */
	_putchar(ch);
	/* return number of writes to stdout */
	return (1);
}

/**
 * s_printer - supplies string output to _printf upon %s specifier
 * @dude: input string
 * Return: sum of characters from string printed
 */
int s_printer(va_list dude)
{
	/* declare/initialize iterator x to 0 & str char* arg in va_list */
	int iter = 0;
	char *str = va_arg(dude, char *);

	/* if str is NULL/false, return (null) */
	if (!str)
		str = "(null)";
	/* until false, str written to stdout by iterating through str */
	while (str[iter])
		_putchar(str[iter++]);
	/* return number of writes (iterations of iter) to stdout */
	return (iter);
}

/**
 * di_printer - supplies output for _printf upon d specifier
 * @dude: input number
 * Return: sum of numbers printed
 */
int di_printer(va_list dude)
{
	/* declares/initializes x to va_list int arg & 2 uint variables */
	int x = va_arg(dude, int);
	unsigned int uint = 0, sum = 1;
	/* stores int input into unsigned int variable */
	uint = x;
	/* conditional upon INT_MIN input */
	if (x == INT_MIN)
	{
		/* write - (negative) to stdout, add 1 write to stdout */
		_putchar('-'), sum++;
		/* write 2 to stdout, add 1 write count to stdout */
		_putchar('2'), sum++;
		/* grabs remainder of INT_MIN divided by 2 bil (-147683649) */
		/* cuts leading 2 off remaining digits to write */
		x %= 2000000000;
		/* makes x into its absolute value for further # writes  */
		x *= -1;
		/* store x (int) value into uint storage variable */
		uint = x;
	}
	/* if x is negative, yet not INT_MIN */
	else if (x < 0)
	{
		/* write - (negative) to stdout, make x into its abs value */
		_putchar('-'), x *= -1;
		/* store x (int) value into uint storage variable */
		uint = x;
		/* add 1 write count to stdout */
		sum++;
	}
	/* until x is a 1 digit int */
	while (x > 9)
		/* detect each digit place from front of x by dividing by 10 */
		/* add 1 write count to stdout */
		x /= 10, sum++;
	/* write stored number recursively by digit to stdout */
	number_pro(uint);
	/* return number of writes to stdout */
	return (sum);
}

/**
 * m_printer - helper function to print % input using _putchar
 * @dude: input
 * Return: void
 */
int m_printer(va_list dude)
{
	/* if input va_list is not NULL/false, write % once to stdout */
	if (dude)
		_putchar('%');
	/* return number of writes to stdout */
	return (1);
}
