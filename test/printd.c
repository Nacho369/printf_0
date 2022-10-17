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
	long int len = -364363;
	long int len2 = 964863;
	int len3, len4;
	char *str = "World";
	
	len3 = _printf("Character: [%c]", 'G');

	_printf("\n");

	len4 = _printf("String : [%s]", str);

	_printf("\n\n");

	_printf("Lenght 1 with d : ");
	_printf("%d\n\n", len);

	_printf("Lenght 1 with i : ");
	_printf("%i\n\n", len);

	_printf("Lenght 2 with d : ");
	_printf("%d\n\n", len2);

	_printf("Lenght 2 with i : ");
	_printf("%i\n\n", len2);

	_printf("\nPrint lenght 3 with d : %d\n\n", len3);
	_printf("\nPrint lenght 3 with i : %i\n\n", len3);
	
	_printf("\nPrint lenght 4 with d : %d\n\n", len4);
	_printf("\nPrint lenght 4 with i : %i\n\n", len4);


	return (0);
}
