#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/* Main Functions */
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

/* Format Printers */
int p_char(va_list args);

int p_str(va_list args);

#endif
