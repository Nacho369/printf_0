#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024; 

	/* _printf("\nUnsigned Integer:[%u]\n\n", ui);

	_printf("Unsigned Octal:[%o]\n\n", ui);*/

	printf("Unsigned Hexadecimal:[%x %X]\n\n", ui, ui);

	_printf("Unsigned Hexadecimal:[%x]\n\n", ui);
	_printf("Unsigned Hexadecimal:[%X]\n\n", ui);

	return (0);
}
