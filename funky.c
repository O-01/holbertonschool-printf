#include "main.h"

/**
 * funky - determines function to return based on input iter
 * @verify: input compared against entries in struct det
 * @dude: va_list input
 * Return: length of verify
 */
int funky(char verify, va_list dude)
{
	/* declare/initialize struct vector, iteration, & write count var */
	wv det[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"d", di_printer},
		{"i", di_printer},
		{"%", m_printer},
		{NULL, NULL}
	};
	int iter = 0, sum = 0;
	/* until spec becomes NULL (input checked against spec & no match) */
	while (det[iter].spec)
	{
		/* if input matches spec */
		if (*(det[iter].spec) == verify)
			/* add write total to return of matching call and return */
			return (sum += det[iter].func(dude));
		/* if input is % (match), print another % */
		if (++iter == 5)
		{
			/* write % to stdout, add 1 write count to stdout */
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
