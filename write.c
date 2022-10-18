#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set
 * appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Prints a string to stdout
 *
 * @str: Pointer to the string to print
 *
 * Return: Lumber of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
