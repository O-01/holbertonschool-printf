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
	va_list args; /*args as variable type for va_list type for va_list to access variable args*/
	int count = 0, i;
	void (*m)(va_list);

	va_start(args, frmt); /*va_start macro initalize args*/

if (frmt) /*checks if format is null*/
	{
		i = 0;
		while (frmt[i]) /*while loop iterates over chars in string until \0*/
		{
			if (frmt[i] == '%') /*checks if current char is % which indicates start of format spec*/
			{
				i++;
				if (frmt[i] == '%') /*if next char after % is also %, means string contains a literal %*/	
				{
					count += _putchar(frmt[i]);
			       		i ++;
				}
				else
				{
					get_func(*(frmt))(args);
					if (m)
						count += m(args);
					else
						count += _putchar(frmt[i]) + _putchar(frmt[i]);
					i ++;
				}	
			}
			else
			{
				count += _putchar(frmt[i]);
				
				i++;
			}
		}
	}
	va_end(args);
	return (count);
}
