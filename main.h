#ifndef _MAIN_H_
#define _MAIN_H_

struct wave
{
	char *spec;
	void (*func)(void);
};

int _printf(const char *format, ...);
int _putchar(char);
int (*get_func(char *))(char);
void c_printer(char);
void s_printer(char *);
void d_printer(int);
void i_printer(int);

#endif
