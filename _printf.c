#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int p_char(va_list args);

/**
 * _printf - Produce output according to specified
 * format
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	int i, j, len = 0;

	va_list arg_param;

	args_t types[] = {
		{'c', p_char}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	va_start(arg_param, format);

	i = 0;

	while (format[i] && format != NULL)
	{
		j = 0;

		while (j < 2)
		{
			if (format[i] == types[j].ch)
			{
				len++;
				types[j].dt(arg_param);
			}
			j++;
		}
		i++;
	}

	_putchar('\n');

	va_end(arg_param);

	return (len);
}

int p_char(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}
