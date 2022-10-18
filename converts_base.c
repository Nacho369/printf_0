#include "main.h"


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

	for (i = 0; num > 0; i++)
	{
		bin_arr[i] = num % 2;
		num = num / 2;
	}

	for (j = i - 1; j >= 0; j--)
		len += _putchar(bin_arr[j] + '0');

	return (len);
}
