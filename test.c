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
	char *str = "Hello There!";
	
	_printf("This prints a character :  [%c]\n", 'G');
	_printf("This prints a string :  [%s]\n", str);
	_printf("This is escape percent [%%]\n");
	
	return (0);
}
