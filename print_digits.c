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
	int i = 0, len = 0, dig, j;
	unsigned int num, abs;
	long int n = va_arg(args, long int);

	int *num_arr = malloc(sizeof(*num_arr));

	if (n < 0)
	{
		_putchar('-');
		len++;
		abs = -n;
	}
	else
	{
		abs = n;
	}

	num = abs;

	while (num != 0)
	{
		dig = num % 10;

		num_arr[i] = dig;
		i++;

		num = num / 10;
	}

	for (j = i - 1; j > -1; j--)
	{
		int digit = num_arr[j];

		_putchar(digit + '0');
		len++;
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
