#include "main.h"

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

	if (format == NULL)
		return (-1);

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
				}
			}
		}
		i++;
	}

	va_end(arg_param);

	return (len);
}
