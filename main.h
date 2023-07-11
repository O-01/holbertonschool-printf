#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct wave - struct called wave
 * @spec: valid input specifier
 * @func: function corresponding to spec
 */

typedef struct wave
{
	char *spec;
	int (*func)();
} wv;

int _printf(const char * const format, ...);
int _putchar(char);
int funky(char, va_list);
int c_printer(va_list);
int s_printer(va_list);
int di_printer(va_list);
void number_pro(int);

#endif
