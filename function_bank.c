#include "main.h"
#include <stdarg.h>

/**
 *
 *
 *
 */

void c_printer(va_list c)
{
	char ch = (char)va_arg(c, int);

	if (ch)
		_putchar(ch);
}

/**
 *
 *
 *
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
 *
 *
 *
 */
/*
void d_printer(va_list d)
{
}
*/
/**
 *
 *
 *
 */
/*
void i_printer(va_list i)
{
	int x = 0;

	if (i)
	{
		for (; i[x]; x++)
			;

		if (x == 1)
		{
			if (i < 0 && i > -2147483648)
			{
				i = -(i);
				_putchar('-');
			}

			if (i / 10)
				i_printer(i / 10);

			if (i == -2147483648)
				_putchar((i % 10) + 64);

			else
				_putchar((i % 10) + '0');
		}
	}
}
*/

/**
 *
 *
 *
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
