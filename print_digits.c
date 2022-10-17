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
	unsigned long int num, abs;
	int n = va_arg(args, int);

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
