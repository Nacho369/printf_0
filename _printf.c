#include "main.h"

/**
 * _printf - Produce output according to specified
 * format
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	int i = 0, j, len = 0, count;
	va_list valist;
	types difftypes[] = {{'c', t_char}, {'s', t_string}, {'d', print_number},
			     {'i', print_number}, {'b', binary}, {'u', print_unsigned},
			     {'x', hexa}, {'X', hexa_upper}, {'o', octal}, {'R', print_rot},
			     {'r', print_rev}, {'S', stringhexa}, {'p', pointer}};

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
				if (format[i] == difftypes[j].t)
				{
					len += difftypes[j].f(valist);
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
