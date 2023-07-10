#include "main.h"

/**
 * _printf - replica of printf
 *@frmt: string to print
 *Return: the chars printed from string
 */

int _printf(const char *format, ...)
{
	va_list mag;
	int x, sum = 0;
	int surf;
	char sub = 0;

	if (!format)
		return (-1);

	va_start(mag, format);

	while (format && format[x])
	{
		sub = format[x];

		if (sub != '%')
		{
			_putchar(sub);
			sum++;
			x++;
		}
		else
		{
			sub = format[x + 1];

			surf = funky(sub, mag);
			if (!surf)
				return (-1);
			sum += surf;
			x += 2;
		}
	}
	va_end(mag);
	return (sum);
}
