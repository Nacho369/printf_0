#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 * Authors: Ehoneah Obed & Abdulhakeem Badejo
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int i, j, count, len = 0;
=======
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};
>>>>>>> Alafara

	register int count = 0;

<<<<<<< HEAD
	args_t types[] = {
		{'c', p_char},
		{'s', p_str}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
=======
	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
>>>>>>> Alafara
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
<<<<<<< HEAD
			i++;
			if (format[i] == '%')
				len += _putchar('%');

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
=======
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
>>>>>>> Alafara
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
