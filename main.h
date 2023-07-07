#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

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

int _printf(const char *frmt, ...);
int _putchar(char);
int (*get_func(char *))(va_list);
int c_printer(va_list);
int s_printer(va_list);
int d_printer(va_list);
int i_printer(va_list);
int number_pro(int);

#endif
