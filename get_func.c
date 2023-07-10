#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_func - determines function to return based on input x
 * @x: input compared against entries in struct det
 * Return: function corresponding to input x
 */

int (*get_func(const char *z))(va_list)
{
	wv det[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"d", di_printer},
		{"i", di_printer},
		{"%", m_printer},
		{NULL, NULL}
	};
	int x = 0;

	if (z != NULL)
		for (; det[x].spec != NULL && *(det[x].spec) != *z; x++)
			;

	return (det[x].func);
}
