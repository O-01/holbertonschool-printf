#include "main.h"

/**
 * _printf - replica of printf
 *@format: string to print
 *Return: the chars printed from string
 */

int _printf(const char *format, ...)
{
	/* declare/initialize va_list variable as list of arguments */
	va_list mag;
	/* declare/initialize holder/representative variable */
	char sub;
	/* incrementers to deal process input & output, respectively */
	int x = 0, sum = 0;
	/* begin processing arguments in va_list following format */
	va_start(mag, format);
	/* if input format is NULL/false or if first argument is % */
	/* with second argument being NULL/false/\0 */
	if (!format || (format[0] == '%' && !format[1]))
		/* return error */
		return (-1);
	/* until format input element read is not NULL/false */
	while (format[x])
	{
		/* if element of format is % */
		if (format[x] == '%')
		{
			/* store next element of format in variable */
			sub = format[x + 1];
			/* add output of called function (total of writes */
			/* of subsequently called funcs to stdout) to */
			/* total of write counts in current function */
			sum += funky(sub, mag), x++;
		}
		/* if element of format is anything other than % */
		else
			/* write format element to stdout, +1 to write count */
			sum += _putchar(format[x]);
		/* iterate through format elements */
		x++;
	}
	/* end processing of arguments in va_list */
	va_end(mag);
	/* return number of writes to stdout */
	return (sum);
}
