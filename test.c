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
	int len;
	char *str = "Hello There!";
	
	_printf("\nThis prints a character :  [%c]\n", 'G');
	_printf("This prints a string :  [%s]\n", str);
	_printf("This is escape percent [%%]\n\n");

	len = _printf("This is a test!");

	_printf("\n\n");

	printf("%d\n\n", len);
	
	return (0);
}
