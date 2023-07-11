#include "main.h"

/**
 * _printf - replica of printf
 *@format: string to print
 *Return: the chars printed from string
 */

int _printf(const char *format, ...)
{
	va_list mag;
	char sub;
	int x, sum = 0;

	va_start(mag, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[x])
	{
		if (format[x] == '%')
		{
			sub = format[x + 1];
			sum += funky(sub, mag), x++;
		}

		else
			sum += _putchar(format[x]);

		x++;
	}
	va_end(mag);
	return (sum);
}
