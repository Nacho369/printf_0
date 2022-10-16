#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int p_char(va_list args);
int p_str(va_list args);

/**
 * _printf - Produce output according to specified
 * format
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	int i, j, len = 0, count = 0;

	va_list arg_param;

	args_t types[] = {
		{'c', p_char},
		{'s', p_str}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	va_start(arg_param, format);

	i = 0;

	while (format != NULL && format[i])
	{
		if (format[i] != '%')
		{
			len += _putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				len += _putchar('%');
			}

			for (j = 0; j < 2; j++)
			{
				if (format[i] == types[j].ch)
				{
					len += types[j].dt(arg_param);
					count = 1;
					break;
				}
			}
			if (!count && format[i] != '%')
			{
				len++;
				len++;
				_putchar('%');
				_putchar(format[i]);
			}
		}
		i++;
	}

	va_end(arg_param);

	return (len);
}

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
