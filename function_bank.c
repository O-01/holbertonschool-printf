#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * c_printer - supplies char output to _printf upon %c specifier
 * @dude: input char
 * Return: void
 */

int c_printer(va_list dude)
{
	char ch = (char)va_arg(dude, int);

	if (ch)
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
	int x, y, sum = 0;
	char *str;

	str = va_arg(dude, char *);

	if (str)
	{
		for (; str[x]; x++)
			;

		for (; y < x; y++, sum++)
			_putchar(str[y]);
	}

	return (sum);
}

/**
 * di_printer - supplies output for _printf upon d specifier
 * @dude: input number
 * Return: sum of numbers printed
 */

int di_printer(va_list dude)
{
        mint x = va_arg(dude, int);
	int wax, sum = 0;

	wax = x;

	if (wax < 0)
	{
		_putchar('-');
		x = -(x);
		x = wax;
		sum++;
	}

	for (; x > 9; sum++)
		x /= 10;

	number_pro(x);

        return (sum);
}

/**
 * m_printer - prints percent/modulo
 * @m: input percent sign/modulo
 * Return: void
 */

int m_printer(va_list dude)
{
	char mdl = (char)va_arg(dude, int);

	if (mdl)
		_putchar('%');

	return (1);
}
