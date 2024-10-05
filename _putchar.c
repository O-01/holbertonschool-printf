#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	/* returns 1 byte of buffer c & outputs that to 1 (stdout) */
	return (write(1, &c, 1));
}
