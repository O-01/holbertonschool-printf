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
void (*get_func(char *))(va_list);
void c_printer(va_list);
void s_printer(va_list);
void d_printer(va_list);
void i_printer(va_list);
void number_pro(int);

#endif
