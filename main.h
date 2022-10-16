#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

int _printf(const char *format, ...);

/**
* struct arg_types - Struct op
*
* @ch: The operator
* @dt: The function associated
*/
typedef struct arg_types
{
	char ch;
	int (*dt)(va_list args);
} args_t;

#endif
