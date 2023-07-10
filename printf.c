#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - replica of printf
 *@frmt: string to print
 *Return: the chars printed from string
 */

int _printf(const char *fmt, ...)
{
	va_list mag;
	int x, sum = 0;
	int (*surf)(va_list);

	if (!fmt)
		return (-1);

	va_start(mag, fmt);

	while (fmt && fmt[x])
	{
		if (fmt[x] != '%')
		{
			_putchar(fmt[x]);
			sum++;
		}
		else
		{
			surf = get_func(&fmt[x + 1]);
			if (!surf)
				return (-1);
			sum += surf(mag);
		}
		x++;
	}

	va_end(mag);
	return (sum);
}
