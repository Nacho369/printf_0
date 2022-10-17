#include "main.h"

/**
 * _printf - Produce output according to specified
 * format
 *
 * @format: Character string
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

	if (format == NULL)
		return (-1);

	va_start(arg_param, format);

	i = 0;

	while (format != NULL && format[i])
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '%')
				len += _putchar('%');

			for (j = 0; j < 2; j++)
			{
				if (format[i] == types[j].ch)
				{
					len += types[j].dt(arg_param);
					break;
				}
			}
		}
		i++;
	}
	_putchar('\n');
	va_end(arg_param);
	return (len);
}
