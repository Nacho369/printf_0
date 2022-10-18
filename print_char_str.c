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
/*
int p_str_np(va_list args)
{
	int i;
	char *str = va_arg(args, char *);
	int len = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i]  > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts(str)
		}
	}
}*/
