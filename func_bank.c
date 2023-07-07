#include "main.h"
#include <stddef.h>

/**
 *
 *
 *
 */

void c_printer(va_list c)
{
	if (c != NULL)
		_putchar(va_arg(c, char));
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

	if (str != NULL)
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

void d_printer(int d)
{
	if (d != NULL)
	{
		if (d < 0 && d > -2147483648)
		{
			d = -(d);
			_putchar('-');
		}

		if (d / 10)
			d_printer(d / 10);

		if (d == -2147483648)
			_putchar((d % 10) + 64);

		else
			_putchar((d % 10) + '0');
	}
}

/**
 *
 *
 *
 */

void i_printer(int i)
{
	int x = 0;

	if (i != NULL)
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
