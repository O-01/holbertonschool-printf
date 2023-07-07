#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

struct wave
{
	char *spec;
	void (*func)();
};

typedef struct wave wv;

int _printf(const char *frmt, ...);
int _putchar(char);
int (*get_func(char *))(char);
void c_printer(va_list c);
void s_printer(va_list s);
void d_printer(va_list d);
void i_printer(va_list i);

#endif
