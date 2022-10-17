#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
<<<<<<< HEAD
 * get_op - select function for conversion char
 * @c: char to check
 * Return: pointer to function
 */

<<<<<<< HEAD
int (*get_op(const char c))(va_list)
=======
  * find_function - function that finds formats for _printf
  * calls the corresponding function.
  * @format: format (char, string, int, decimal)
  * Return: NULL or function associated ;
  */
int (*find_function(const char *format))(va_list)
>>>>>>> Alafara
{
	unsigned int i = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};

	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].f);
		i++;
	}
	return (NULL);
}
/**
  * _printf - function that produces output according to a format.
  * @format: format (char, string, int, decimal)
  * Return: size the output text;
  */
int _printf(const char *format, ...)
=======
	va_list arg_param;

	args_t types[] = {
		{'c', p_char},
		{'s', p_str}
	};

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
>>>>>>> 577c5428389078bd1473433d7ca0821f03e1a930
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, cprint = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			cprint++;
			i++;
		}
		if (format[i] == '\0')
			return (cprint);
		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			cprint += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		cprint++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
<<<<<<< HEAD
	va_end(ap);
<<<<<<< HEAD
	return (sum);
=======
	for (j = 0; s[j] != '\0'; j++)
		_putchar(s[j]);

	return (j);
>>>>>>> 
=======
	return (cprint);
>>>>>>> Alafara
}
