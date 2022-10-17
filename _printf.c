#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

<<<<<<< HEAD
int p_char(va_list args);
int p_str(va_list args);
=======

int check(const char *format, int count, int i);
>>>>>>> 53b76cc55c5030a77e336941459f0da8a1377812

/**
 * _printf - Produce output according to specified
 * format
 *
<<<<<<< HEAD
 * @format: First arguments
=======
 * @format: Character string
>>>>>>> 53b76cc55c5030a77e336941459f0da8a1377812
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
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
=======
	int i = 0, j, count, len = 0;
	va_list arg_param;

>>>>>>> 53b76cc55c5030a77e336941459f0da8a1377812
	args_t types[] = {
		{'c', p_char},
		{'s', p_str}
	};

<<<<<<< HEAD
	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);
<<<<<<< HEAD
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
=======

	va_start(arg_param, format);

	while (format != NULL && format[i])
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
>>>>>>> 53b76cc55c5030a77e336941459f0da8a1377812
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
			len += check(format, count, i);
		}
		i++;
<<<<<<< HEAD
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
=======
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
>>>>>>> 53b76cc55c5030a77e336941459f0da8a1377812
}
