#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from
 * one number to another
 * @n: input
 * @m: input
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a;

	for (a = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			a++;
	}
	return (a);
}
