#ifndef _MAIN_H_
#define _MAIN_H_

struct wave
{
	char *spec;
	void (*func)(void);
};

int _printf(const char *format, ...);
int _putchar(char);
int _strlen(char *s);
#endif
