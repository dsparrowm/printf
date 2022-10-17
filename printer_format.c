#include "main.h"

/**
 * print_char - print character
 * @args: character argument
 *
 * Return: number of character printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - print a string
 * @args: string argument
 *
 * Return: amount of character printed
 */
int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - print persent symbol
 * @args: sign argument
 *
 * Return: aount of character printed
 */

int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @args: list of arguments
 *
 * Return: return the amount of integer printed.
 */

int print_integer(va_list args)
{
	unsigned int counter, div = 1, i, temp;
	int n;

	n = va_arg(args, int);
	counter = 0;

	/* check for negative numbers */
	if (n < 0)
	{
		_putchar('-');
		counter++;
		n *= -1;
	}

	/* print first few digits */
	for (i = 0; n / div > 9; i++, div *= 10)
		;

	for (; div >= 1; n %= div, div /= 10, counter++)
	{
		temp = n / div;
		_putchar('0' + temp);
	}

	return (counter);
}

/**
 * print_unsigned_int - print unsigned integers
 * @args: unsigned argument
 *
 * Return: amount of int printed
 */

int print_unsigned_int(va_list args)
{
	int div = 1, i, temp;
	unsigned int n;

	n = va_arg(args, unsigned int);

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		temp = n / div;
		_putchar('0' + temp);
	}

	return (i + 1);
}
