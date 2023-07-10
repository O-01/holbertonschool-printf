#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * c_printer - supplies char output to _printf upon %c specifier
 * @c: input char
 * Return: void
 */

int c_printer(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * s_printer - supplies string output to _printf upon %s specifier
 * @s: input string
 * Return: void
 */

int s_printer(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * p_printer - supplies output for _printf upon p specifer
 * @p: percent
 * Return:
 */
int p_printer(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{	
		return (*str);
	}
		return (*str);
}

/**
 * d_printer - supplies output for _printf upon d specifier
 * @d: input number
 * Return: void
 */
int d_printer(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * i_printer - supplies output for _printf upon i specifier
 * @i: input number
 * Return: void
 */

int i_printer(va_list args)
{
        return (print_d(args));
}

/**
 * number_pro - helper function to print # input recursively using _putchar
 * @d: input number
 * Return: void
 */

int number_pro(int d)
{
	int x = 0;

	if (d)
	{
		if (d < 0 && d > -2147483648)
		{
			d = -(d);
			_putchar('-');
			x++;
		}

		for (; d / 10; d /= 10)
		{
			if (d == -2147483648)
			{
				_putchar((d % 10) + 64);
				x++;
			}
			else
			{
				_putchar((d % 10) + '0');
				x++;
			}
		}
	}

	return (x);
}
