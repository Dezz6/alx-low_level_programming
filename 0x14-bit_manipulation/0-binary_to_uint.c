#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: binary number to convert
 * Return: converted number or 0 if b is NULL
 * or has chars other than 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int a, base_2;

	if (!b)
		return (0);

	i = 0;

	for (a = 0; b[a] != '\0'; a++)
		;

	for (a--, base_2 = 1; a >= 0; a--, base_2 *= 2)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		if (b[a] & 1)
			i += base_2;
	}
	return (i);
}
