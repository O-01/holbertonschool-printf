#include "main.h"

/**
 * funky - determines function to return based on input x
 * @verify: input compared against entries in struct det
 * @dude: va_list input
 * Return: length of verify
 */

int funky(char verify, va_list dude)
{
	/* declare/initialize struct vector, incrementer, & write count var */
	wv det[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"d", di_printer},
		{"i", di_printer},
		{"%", m_printer},
		{NULL, NULL}
	};
	int x = 0, sum = 0;
	/* until spec becomes NULL (input checked against spec & no match) */
	while (det[x].spec)
	{
		/* if input matches spec */
		if (*(det[x].spec) == verify)
		{
			/* add write count returned by matching func call */
			sum += det[x].func(dude);
			/* return number of writes to stdout */
			return (sum);
		}
		/* advance x (loop compares spec vs input) */
		x++;
		/* if input is %, match */
		if (x == 5)
		{
			/* write % to stdout, add 1 to writes to stdout */
			_putchar('%'), sum++;
			/* write actual input to stdout, add 1 to writes */
			_putchar(verify), sum++;
			/* return number of writes to stdout */
			return (sum);
		}
	}
	/* return number of writes to stdout */
	return (sum);
}
