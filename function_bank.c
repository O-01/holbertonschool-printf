#include "main.h"
#include <stdarg.h>

/**
 * c_printer - supplies char output to _printf upon %c specifier
 * @c: input char
 * Return: void
 */

int c_printer(va_list c)
{
	int x = 0;
	char ch = (char)va_arg(c, int);

	if (ch)
	{
		_putchar(ch);
		x++;
	}

	return (x);
}

/**
 * s_printer - supplies string output to _printf upon %s specifier
 * @s: input string
 * Return: void
 */

int s_printer(va_list s)
{
	int x, y, z = 0;
	char *str;

	str = va_arg(s, char *);

	if (str)
	{
		for (; str[x]; x++)
			;

		for (; y < x; y++)
		{
			_putchar(str[y]);
			z++;
		}
	}
}

/**
 * d_printer - supplies output for _printf upon d specifier
 * @d: input number
 * Return: void
 */

int d_printer(va_list d)
{
        int x = 0;

	if (d)
		x = number_pro(va_arg(i, int));

        return (x);
}

/**
 * i_printer - supplies output for _printf upon i specifier
 * @i: input number
 * Return: void
 */

int i_printer(va_list i)
{
	int x = 0;

	if (i)
		x = number_pro(va_arg(i, int));

	return (x);
}

/**
 * number_pro - helper function to print # input recursively using _putchar
 * @d: input number
 * Return: void
 */

int number_pro(int d)
{
	int x = 0;

	if (d)
	{
		if (d < 0 && d > -2147483648)
		{
			d = -(d);
			_putchar('-');
			x++;
		}

		for (; d / 10; d /= 10)
		{
			if (d == -2147483648)
			{
				_putchar((d % 10) + 64);
				x++;
			}
			else
			{
				_putchar((d % 10) + '0');
				x++;
			}
		}
	}

	return (x);
}
