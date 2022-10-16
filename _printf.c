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
	int i, j, len = 0;

	va_list arg_param;

	args_t types[] = {
		{'c', p_char},
		{'s', p_str}
	};

	va_start(arg_param, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			i++;
			len++;
			if (format[i] == '%')
				_putchar('%');
			len++;

			for (j = 0; j < 2; j++)
			{
				if (format[i] == types[j].ch)
				{
					types[j].dt(arg_param);
					len++;
				}
			}
		}
	}

	va_end(arg_param);

	return (len);
}

int p_char(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}

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
