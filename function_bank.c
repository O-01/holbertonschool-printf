#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 *
 *
 *
 */

void c_printer(va_list c)
{
	char *ch = (char)va_arg(c, int);

	if (ch != NULL)
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

void d_printer(va_list d)
{
	int *dec = va_arg(d, int);

	if (dec != NULL)
	{
		if (dec < 0 && dec > -2147483648)
		{
			dec = -(dec);
			_putchar('-');
		}

		if (dec / 10)
			d_printer(dec / 10);

		if (dec == -2147483648)
			_putchar((dec % 10) + 64);

		else
			_putchar((dec % 10) + '0');
	}
}

/**
 *
 *
 *
 */

void i_printer(va_list i)
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
