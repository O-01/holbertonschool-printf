#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - replica of printf
 *@frmt: string to print
 *Return: the chars printed from string
 */

int _printf(const char *frmt, ...)
{
	va_list args;
	int i, x = 0;
	char *yank = 0;

	va_start(args, frmt);
	while (frmt && frmt[i])
	{
		*yank = frmt[i];
		if (*yank == '%')
		{
			i++;
			if (get_func(yank)(args))
				get_func(yank)(args);
		}
		else
			_putchar(frmt[i]);
		i++;
	}
	va_end(args);
	return (x);
}
