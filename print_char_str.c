#include "main.h"


/**
 * p_char - Prints character format
 *
 * @args: Argument to print
 *
 * Return: Lenght of character Printed
 */
int p_char(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}

/**
 * p_str - Prints string format
 *
 * @args: Argument to print
 *
 * Return: Lenght of character printed
 */
int p_str(va_list args)
{
	int i, j;
	char n[] = "(null)";
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}
	for (j = 0; s[j] != '\0'; j++)
		_putchar(s[j]);

	return (j);
}

/**
 * p_str_np - Primys strings format and non printable characters as \x
 *
 * @args: Argument to print
 *
 * Return: Lenght of argument to print
 */
int p_str_np(va_list args)
{
	int i;
	char *str = va_arg(args, char *);
	int len = 0;
	char *result;

	for (i = 0; str[i]; i++)
	{
		if (str[i]  > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts("\\x");
			result = convert_base(str[i], 16, 0);

			if (!result[1])
				len += _putchar('0');

			len += _puts(result);
		}
		else
			len += _putchar(str[i]);

	}

	return (len);
}

/**
 * convert_base - Converts character passed to hex
 *
 * @num: Character passed
 * @base: Base to convert to
 * @case_type: If uppercase or lowercase
 *
 * Description: For @base_type 0 for uppercase, 1 for lowercase
 *
 * Return: Hex value
 */
char *convert_base(unsigned int num, int base, int case_type)
{
	int i, rem;
	static char hex_arr[256];
	static char *ptr;

	for (i = 0; num > 0; i++)
	{
		rem = num % base;

		if (rem < 10)
		{
			hex_arr[i] = rem + '0';
		}
		else
		{
			if (case_type)
				hex_arr[i] = rem + 87;

			else if (!case_type)
				hex_arr[i] = rem + 55;
		}

		num = num / base;
	}
	ptr = hex_arr;

	return (ptr);
}
