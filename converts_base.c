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
	int i, j, len = 0;
	unsigned int num;
	char hex_arr[256];

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		int rem = num % 16;

		if (rem > 9)
		{
			rem = hex_check(rem, 'x');
			hex_arr[len] = rem;
		}
		else
			hex_arr[i] = rem + 48;

		num = num / 16;
	}

	for (j = i - 1; j >= 0; j--)
		len += _putchar(hex_arr[j] + '0');

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
		len += _putchar('0');

	for (i = 0; num > 0; i++)
	{
		rem = num % 16;

		if (rem > 9)
		{
			rem = hex_check(rem, 'X');
			HEX_arr[i] = rem;
		}
		else
			HEX_arr[i] = rem + 48;

		num = num / 16;
	}

	for (j = i - 1; j >= 0; j--)
		len += _putchar(HEX_arr[j] + '0');

	return (len);
}


/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char case_type)
{
	char *hex = "abcdef";
	char *HEX = "ABCDEF";

	num = num - 10;
	if (case_type == 'x')
		return (hex[num]);
	else
		return (HEX[num]);
	return (0);
}
