#include "main.h"

/**
 * _printf - prints data to stdout (standard output stream)
 * @format: string to print
 *
 * Return: number of character printed
 *	or -1 if fails
 */

int _printf(const char *format, ...)
{
	int counter;

	print_func func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{'\0', NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	/* call printer function to handle printing */
	counter = printer(format, func_list, arg_list);

	va_end(arg_list);

	return (counter);
}
