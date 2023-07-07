#include "main.h"
#include <stdarg.h>

/**
 * c_printer - supplies char output to _printf upon %c specifier
 * @c: input char
 * Return: void
 */

void c_printer(va_list c)
{
	char ch = (char)va_arg(c, int);

	if (ch)
		_putchar(ch);
}

/**
 * s_printer - supplies string output to _printf upon %s specifier
 * @s: input string
 * Return: void
 */

void s_printer(va_list s)
{
	int x, y = 0;
	char *str;

	str = va_arg(s, char *);

	if (str)
	{
		for (; str[x]; x++)
			;

		for (; y < x; y++)
			_putchar(str[y]);
	}
}

/**
 * d_printer - supplies output for _printf upon d specifier
 * @d: input number
 * Return: void
 */

void d_printer(va_list d)
{
	number_pro(va_arg(d, int));
}

/**
 * i_printer - supplies output for _printf upon i specifier
 * @i: input number
 * Return: void
 */

void i_printer(va_list i)
{
	number_pro(va_arg(i, int));
}

/**
 * number_pro - helper function to print # input recursively using _putchar
 * @d: input number
 * Return: void
 */

void number_pro(int d)
{
	if (d)
	{
		if (d < 0 && d > -2147483648)
		{
			d = -(d);
			_putchar('-');
		}

		if (d / 10)
			number_pro(d / 10);

		if (d == -2147483648)
			_putchar((d % 10) + 64);

		else
			_putchar((d % 10) + '0');
	}
}
