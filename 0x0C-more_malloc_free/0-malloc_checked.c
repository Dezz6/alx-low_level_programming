#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: amount of bytes to allocate
 * Return: pointer to allocated memory or 98 if failure
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
