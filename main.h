#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - A new struct type defining our print
 * @format: format to represent data type
 * @func: a function pointer that prints to
 *	a data type according to the symbol
 */
typedef struct print
{
	char *format;
	void (*func)(va_list);
} print_func;

int _putchar(char c);
int _printf(const char *format, ...);



#endif /* _MAIN_H_ */
