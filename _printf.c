#include "main.h"

/**
 * _printf - replica of printf
 *@frmt: string to print
 *Return: the chars printed from string
 */

int _printf(const char * const format, ...)
{
	va_list mag;
	char sub;
	int x, sum = 0;

	va_start(mag, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

        while (format && format[x])
	{
		sub = format[x];

		if (sub == '%')
		{
			sub = format[x + 1];

			if (!sub)
				return (-1);

			sum += funky(sub, mag);
		}

		else
			sum += _putchar(format[x]);

		x++;
	}

	va_end(mag);
	return (sum);
}
