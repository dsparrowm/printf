#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
       	char *s;
	const char *p;
	int i, nums = 0;
	va_list ptr;

	va_start(ptr, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			nums++;
			continue;
		}
		switch (*++p)
		{
			case 'c':
				i = va_arg(ptr, int);
				putchar(i);
				nums++;
				break;
			case 's':
				s = va_arg(ptr, char *);
				fputs(s, stdout);
				nums++;
				break;
			case '%':
				putchar('%');
				nums++;
				break;
		}
	}
	va_end(ptr);
	return (nums);
}


