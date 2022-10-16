#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	char *str = "World";
	
	_printf("\nThis prints a character :  [%c]\n", 'G');
	_printf("This prints a string :  [%s]\n", str);
	_printf("This is escape percent [%%]\n\n");

	_printf("My Printf; \n");

	len = _printf("Hello[%s]", str);

	printf("%d\n\n", len);

	printf("Normal Printf; \n");

	len2 = printf("Hello[%s]", str);

	printf("%d\n\n", len2);
	
	return (0);
}
