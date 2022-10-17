#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int p_char(va_list args);
int p_str(va_list args);

/**
 * _printf - Produce output according to specified
 * format
 *
 * @format: First arguments
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
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
=======
	int i, j, len = 0;

	va_list arg_param;

>>>>>>> Alafara
	args_t types[] = {
		{'c', p_char},
		{'s', p_str}
	};

<<<<<<< HEAD
	if (format == NULL || (format[0] == '%' && format[1] == 0))
=======
	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
>>>>>>> Alafara
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
=======
	va_start(arg_param, format);

	for (i = 0; format[i]; i++)
>>>>>>> Alafara
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
<<<<<<< HEAD
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
=======
			i++;
			len++;
			if (format[i] == '%')
>>>>>>> Alafara
			{
				_putchar('%');
				len++;
			}
<<<<<<< HEAD
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
>>>>>>> Alafara
=======

			for (j = 0; j < 2; j++)
			{
				if (format[i] == types[j].ch)
				{
					len += types[j].dt(arg_param);
				}
			}
		}
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
>>>>>>> Alafara
	}
	for (j = 0; s[j] != '\0'; j++)
		_putchar(s[j]);
	return (j);
}
