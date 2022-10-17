#include "main.h"

/**
 * _printf - Produce output according to specified
 * format
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	int i, j, count, len = 0;

	va_list arg_param;

	args_t types[] = {
		{'c', p_char},
		{'s', p_str}
	};

	if (format == NULL)
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

			count = 0;

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
