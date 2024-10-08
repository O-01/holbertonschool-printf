#include "main.h"

/**
 * _printf - replica of printf
 *@format: string to print
 *Return: the chars printed from string
 */
int _printf(const char *format, ...)
{
	/* declare va_list variable (list of passed arguments) */
	va_list mag;
	/* declare storage variable */
	char sub;
	/* iteration vars to process input & output, respectively */
	int iter = 0, sum = 0;
	/* if input format is NULL/false or if first argument is % */
	/* with second argument being NULL/false/\0 */
	if (!format || (format[0] == '%' && !format[1]))
		/* return error */
		return (-1);
	/* begin processing arguments in va_list following format */
	va_start(mag, format);
	/* until format input element read is NULL/false */
	while (format[iter])
	{
		/* if element of format is % */
		if (format[iter] == '%')
			/* store next element of format in variable */
			sub = format[iter + 1],
			/* add output of called function (total of writes */
			/* of subsequently called funcs to stdout) to */
			/* total of write counts in current function */
			sum += funky(sub, mag), iter++;
		/* if element of format is anything other than % */
		else
			/* write format element to stdout, +1 to write count */
			sum += _putchar(format[iter]);
		/* iterate through format elements */
		iter++;
	}
	/* end processing of arguments in va_list */
	va_end(mag);
	/* return number of writes to stdout */
	return (sum);
}
