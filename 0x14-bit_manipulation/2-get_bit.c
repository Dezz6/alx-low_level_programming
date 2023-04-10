#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: input
 * @index: index of the bit
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a < 64; n >>= 1, a++)
	{
		if (index == a)
			return (n & 1);
	}
	return (-1);
}
