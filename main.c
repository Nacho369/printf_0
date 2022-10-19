#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0;

	_printf("%S\n", "Best\nSchool");

	_printf("%S\n", "Best\tSchool");

	len = _printf("%S\n", "Best\rSchool");

	_printf("%d\n", len);

	return (0);
}
