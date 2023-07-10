#include "main.h"

/**
 * _printf - replica of printf
 *@frmt: string to print
 *Return: the chars printed from string
 */

int _printf(const char *fmt, ...)
{
	va_list mag;
	int x, sum = 0;
	int surf;
	char sub = 0;

	if (!fmt)
		return (-1);

	va_start(mag, fmt);

	while (fmt && fmt[x])
	{
		sub = fmt[x];

		if (sub != '%')
		{
			_putchar(sub);
			sum++;
			x++;
		}
		else
		{
			sub = fmt[x + 1];
			surf = funky(sub, mag);
			if (!surf)
				return (-1);
			sum += surf;
		}
	}

	va_end(mag);
	return (sum);
}
