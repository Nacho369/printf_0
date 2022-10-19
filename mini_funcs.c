#include "main.h"

/**
 * convert_base - Converts character passed to hex
 *
 * @num: Character passed
 * @base: Base to convert to
 * @case_type: If uppercase or lowercase
 *
 * Description: For @case_type, input 0 for uppercase, 1 for lowercase
 *
 * Return: Hex value
 */
char *convert_base(unsigned int num, int base, int case_type)
{
	int i, rem;
	static char hex_arr[256];
	char *ptr;

	for (i = 0; num > 0; i++)
	{
		rem = num % base;

		if (rem < 10)
		{
			hex_arr[i] = 48 + rem;
		}
		else
		{
			if (case_type)
				hex_arr[i] = 87 + rem;

			else if (!case_type)
				hex_arr[i] = 55 + rem;
		}

		num = num / base;
	}
	ptr = hex_arr;

	return (ptr);
}

/**
 * reverse - Entry point
 *
 * @str: Pointer the string we want to reverse and print
 *
 * Return: Reversed string
 */
char *reverse(char *str)
{
	int i, j, k;
	char *rev = malloc(sizeof(char) * 100);

	for (i = 0; str[i]; i++)
		;

	for (j = i - 1, k = 0; j >= 0; j--, k++)
		rev[k] = str[j];

	return (rev);
}
