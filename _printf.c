#include "main.h"

/**
 *
 *
 *
 */

int _printf(const char *frmt, ...)
{
	if (format != NULL) /*checks if format is null*/

	{	int count = 0, i; /*count keeps track of the number of
				  chars being printed*/
		int (*m) (va_list);
		va_list args; /*args as variable type for va_list type
				for va_list to access variable args*/

		va_start (args, format); /*va_start macro initalize
					   args*/
		i = 0;
		while (format[i] != '\0') /*while loop iterates over
					    chars in string until \0*/
		{
			if (format[i] == '%') /*checks if current char
						is % which indicates
						start of format spec*/
		}
}
