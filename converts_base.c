#include "main.h"


/**
 * dec_to_bin - Converts unsigned decimal number to binary
 *
 * @args: Argument to convert
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


/**
 * dec_to_oct - Converts unsigned decimal number to octal
 *
 * @args: Argument to convert
 *
 * Return: Lenght of character printed
 */
int dec_to_oct(va_list args)
{
	int i, j, len = 0;
	unsigned int num;
	int oct_arr[256];

	num = va_arg(args, unsigned int);

	if (num == 0)
		len += _putchar('0');

	for (i = 0; num > 0; i++)
	{
		oct_arr[i] = num % 8;
		num = num / 8;
	}

	for (j = i - 1; j >= 0; j--)
		len += _putchar(oct_arr[j] + '0');

	return (len);
}


/**
 * dec_to_hex - Converts unsigned decimal number to
 * hexadecimal with lower case letters.
 *
 * @args: Argument to convert
 *
 * Return: Lenght of character printed
 */
int dec_to_hex(va_list args)
{
	int i, j, rem, len = 0;
	unsigned int num;
	int hex_arr[256];

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		rem = num % 16;

		if (rem < 10)
		{
			hex_arr[i] = rem;
		}
		else
			hex_arr[i] = rem + 39;

		num = num / 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		len += _putchar(hex_arr[j] + '0');
	}

	return (len);
}


/**
 * dec_to_HEX - Converts unsigned decimal number to
 * hexadecimal with uppercase letters.
 *
 * @args: Argument to convert
 *
 * Return: Lenght of character printed
 */
int dec_to_HEX(va_list args)
{
	int i, j, rem, len = 0;
	unsigned int num;
	int HEX_arr[256];

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		rem = num % 16;

		if (rem < 10)
		{
			HEX_arr[i] = rem;
		}
		else
			HEX_arr[i] = rem + 7;

		num = num / 16;
	}

	for (j = i - 1; j >= 0; j--)
		len += _putchar(HEX_arr[j] + '0');

	return (len);
}
