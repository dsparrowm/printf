#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - A new struct type defining our print
 * @specifier: format to represent data type
 * @func: a function pointer that prints to
 *	a data type according to the symbol
 */
typedef struct print
{
	char *specifier;
	int (*func)(va_list);
} print_func;

/* Function Prototypes */
int printer(const char *format, print_func func_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_unsigned_int(va_list);

#endif /* _MAIN_H_ */
