#include "main.h"

/**
 * p_nums - Prints digits of a number
 *
 * @args: Argument to print
 *
 * Return: Lenght of character printed
 */
int p_nums(va_list args)
{
	int len = 0, div = 1;
	unsigned int num;
	int n = va_arg(args, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}


/**
 * dec_to_bin - Converts unsigned decimal number to binary
 *
 * @args: Argument to print
 *
 * Return: Lenght of character printed
 */
int dec_to_bin(va_list args)
{
	int i, j, len = 0;
	unsigned int num;
	int bin_arr[256];

	num = va_arg(args, unsigned int);

	if (num == 0)
		len += _putchar('0');

	if (num < 1)
		return (-1);

	if (num < 2)
		len += _putchar(num);

	for (i = 0; num > 0; i++)
	{
		bin_arr[i] = num % 2;
		num = num / 2;
	}

	for (j = i - 1; j >= 0; j--)
		len += _putchar(bin_arr[j] + '0');

	return (len);
}
