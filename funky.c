#include "main.h"

/**
 * funky - determines function to return based on input x
 * @verify: input compared against entries in struct det
 * @dude: va_list input
 * Return: length of verify
 */

int funky(char verify, va_list dude)
{
	wv det[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"d", di_printer},
		{"i", di_printer},
		{"%", NULL},
		{NULL, NULL}
	};
	int x, sum, pip = 0;

	while (det[x].spec != NULL)
	{
		if (*(det[x].spec) == verify)
		{
			if (x != 4)
			{
				sum += det[x].func(dude);
				pip = 1;
			}

			else
			{
				_putchar('%');
				sum++;
				pip = 1;
			}
		}

		else
			x++;
	}

	if (pip == 0)
	{
		_putchar('%');
		_putchar(verify);
		sum += 2;
	}

	return (sum);
}
