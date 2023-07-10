#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_func - determines function to return based on input x
 * @x: input compared against entries in struct det
 * Return: function corresponding to input x
 */

int (*get_func(char x))(va_list args)
{
	wv det[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"d", d_printer},
		{"i", i_printer},
		{NULL, NULL}
	};
	int i = 0;

	if (x)
		while (det[i].spec && *(det[i].spec) != *x)
			i++;

	return (det[i].func);
}
