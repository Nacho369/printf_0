#include "main.h"

/**
 * p_digits - Prints digits of a number
 *
 * @args: Argument to print
 *
 * Return: Lenght of character printed
 */
int p_digits(va_list args)
{
	int  len = 0, div = 1;
	unsigned int num;
	int n = va_arg(args, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	for (; num / div > 9; )
		div *= 10;

	while (num != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * _isdigit - Verifies if a char is a digit
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * _isprintable - Evaluates if a char is printable
 * @c: Char to be evaluated.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int _isprintable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
