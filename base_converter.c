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
	char *ptr = NULL;

	for (i = 0; num > 0; i++)
	{
		rem = num % base;

		if (rem < 10)
		{
			hex_arr[i] = rem + '0';
		}
		else
		{
			if (case_type)
				hex_arr[i] = rem + 87;

			else if (!case_type)
				hex_arr[i] = rem + 55;
		}

		num = num / base;
	}
	ptr = hex_arr;

	return (ptr);
}
