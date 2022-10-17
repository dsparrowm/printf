#include "main.h"

/**
 * printer - handles the data printing
 * @format: string to print
 * @func_list: list of function calls to choose from
 *	based on the argument passed
 * @arg_list: list of argument passed to _printf
 *
 * Return: total number of character printed
 *	or -1 if fails
 */
int printer(const char *format, print_func func_list[], va_list arg_list)
{
	int count = 0, i, j, temp;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /* found a specifier */
		{
			/* loop through func_list to get the right func */
			for (j = 0; *func_list[j].specifier != '\0'; j++)
			{
				if (format[i + 1] == *func_list[j].specifier)
				{
					temp = func_list[j].func(arg_list);
					if (temp == -1)
						return (-1);
					count += temp;
					break;
				}
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
			/* print text with no special meaning and increase count */
	}
	return (count);
}
