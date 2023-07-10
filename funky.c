#include "main.h"

/**
 * get_func - determines function to return based on input x
 * @x: input compared against entries in struct det
 * Return: function corresponding to input x
 */

int funky(char z, va_list mag)
{
	wv det[] = {
		{"c", c_printer},
		{"s", s_printer},
		{"d", di_printer},
		{"i", di_printer},
		{"%", m_printer},
		{NULL, NULL}
	};
	/* int yank = va_arg(mag, int); */
	int x = 0;

	if (z)
		for (; det[x].spec != NULL && *(det[x].spec) != z; x++)
			;

	return (det[x].func(mag));
}
