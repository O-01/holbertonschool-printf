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
		{"%", m_printer},
		{NULL, NULL}
	};
	mint x, sum = 0;

	while (det[x].spec)
	{
		if (*(det[x].spec) == verify)
		{
			sum += det[x].func(dude);
			return (sum);
		}

		x++;

		if (x > 5)
		{
			_putchar('%'), sum++;
			_putchar(verify), sum++;
			return (sum);
		}
	}

	return (sum);
}
