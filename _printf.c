#include "main.h"

/**
 *
 *
 *
 */

int _printf(const char *frmt, ...)
{
	if (format != NULL) /*checks if format is null*/

	{	
		int count = 0, i; /*count keeps track of the number of
				  chars being printed*/
		int (*m) (va_list);
		va_list args; /*args as variable type for va_list type for va_list to access variable args*/

		va_start (args, format); /*va_start macro initalize args*/
		i = 0;
		while (format[i]) /*while loop iterates over chars in string until \0*/
		{
			if (format[i] == '%') /*checks if current char is % which indicates start of format spec*/
		}
			if (format[i + 1] == '%') /*if next char after
						  % is also %, means
						string contains a
					      literal %*/	
			{
				count += _putchar(format[i]);
			       	i += 2;
			}
			else
			}
				m = get_func(format[i + 1]);
				if (m)
					count += m(args);
				else
					count += _putchar(format[i]) + _putchar(format[i + 1]);
				i += 2;
			}
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	{
	va_end(args);
	return (count);
	}

return (-1);

}
