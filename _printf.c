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
	int i = 0, j, len = 0, count;
	va_list valist;
	args_t difftypes[] = {
		{'c', p_char}, {'s', p_str}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);
	va_start(valist, format);
	while (format != NULL && format[i])
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '%')
				len += _putchar('%');
			j = 0;
			count = 0;
			while (j < 13)
			{
				if (format[i] == difftypes[j].ch)
				{
					len += difftypes[j].dt(valist);
					count = 1;
					break; }
				j++; }
			if (!count && format[i] != '%')
			{
				len++;
				len++;
				_putchar('%');
				_putchar(format[i]); }}
		i++; }
	va_end(valist);
	return (len);
}
