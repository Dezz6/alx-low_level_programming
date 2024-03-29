#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: input
 * @index: index
 * Return: 1 if it worked, -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
