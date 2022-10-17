#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - implement my own printf function
 * @format: string containing format to print
 *
 * Return: number of characters printed to stdout
 */
int _printf(const char *format, ...)
{
	char *s;
	const char *p;
	int i, nums = 0;
	va_list ptr;

	va_start(ptr, format);
	for (p = format; *p != '\0'; p++)
	{
		if (format == NULL)
			return (-1);
		if (*p != '%')
		{
			putchar(*p);
			nums += 1;
			continue;
		}
		switch (*++p)
		{
			case 'c':
				i = va_arg(ptr, int);
				putchar(i);
				nums += 1;
				break;
			case 's':
				s = va_arg(ptr, char *);
				fputs(s, stdout);
				nums += 1;
				break;
			case '%':
				putchar('%');
				nums += 1;
				break;
		}
	}
	va_end(ptr);
	return (nums);
}


