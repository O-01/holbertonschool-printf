#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

/**
 * struct wave - struct called wave
 * @spec: valid input specifier
 * @func: function corresponding to spec
 */

struct wave
{
	char *spec;
	int (*func)(va_list);
};

typedef struct wave wv;
typedef unsigned int mint;

int _printf(const char *frmt, ...);
int _putchar(char);
int funky(char, va_list);
int c_printer(va_list);
int s_printer(va_list);
int di_printer(va_list);
int m_printer(va_list);
void number_pro(int);

#endif
