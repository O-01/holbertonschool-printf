#include "main.h"

/**
 * c_printer - supplies char output to _printf upon %c specifier
 * @dude: input char
 * Return: void
 */

int c_printer(va_list dude)
{
	int ch = va_arg(dude, int);

	_putchar(ch);

	return (1);
}

/**
 * s_printer - supplies string output to _printf upon %s specifier
 * @dude: input string
 * Return: sum of characters from string printed
 */

int s_printer(va_list dude)
{
	int x = 0;
	char *str = va_arg(dude, char *);

	if (!str)
		str = "(null)";

	while (str[x])
		_putchar(str[x]), x++;

	return (x);
}

/**
 * di_printer - supplies output for _printf upon d specifier
 * @dude: input number
 * Return: sum of numbers printed
 */

int di_printer(va_list dude)
{
	int x = va_arg(dude, int);
	unsigned int wax = 0, sum = 1;

	wax = x;

	if (x == INT_MIN)
	{
		_putchar('-'), sum++;
		_putchar('2'), sum++;

		x %= 2000000000;
		x *= -1;
		wax = x;
	}

	else if (x < 0)
	{
		_putchar('-'), x *= -1;
		wax = x;
		sum++;
	}

	while (x > 9)
		x /= 10, sum++;

	number_pro(wax);

	return (sum);
}

/**
 * m_printer - helper function to print % input using _putchar
 * @dude: input
 * Return: void
 */

int m_printer(va_list dude)
{
	if (dude)
		_putchar('%');
	return (1);
}
