#include "main.h"


int check(const char *format, int count, int i);

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
	int i = 0, j, count, len = 0;
	const int f_len = 9;
	va_list arg_param;

	args_t types[] = {
		{'c', p_char}, {'s', p_str},
		{'d', p_nums}, {'i', p_nums},
		{'b', dec_to_bin}, {'u', p_uns_num},
		{'o', dec_to_oct}, {'x', dec_to_hex},
		{'X', dec_to_HEX}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	va_start(arg_param, format);

	while (format != NULL && format[i])
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '%')
				len += _putchar('%');

			count = 0;

			for (j = 0; j < f_len; j++)
			{
				if (format[i] == types[j].ch)
				{
					len += types[j].dt(arg_param);
					count = 1;
					break;
				}
			}
			len += check(format, count, i);
		}
		i++;
	}
	va_end(arg_param);
	return (len);
}
/**
 * check - Check requirement
 *
 * @format: Character string
 * @count: Check value
 * @i: integer iteration
 *
 * Return: len
 */
int check(const char *format, int count, int i)
{
	int len = 0;

	if (!count && format[i] != '%')
	{
		len++;
		len++;
		_putchar('%');
		_putchar(format[i]);
	}

	return (len);
}
