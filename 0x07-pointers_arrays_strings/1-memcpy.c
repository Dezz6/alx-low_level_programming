#include "main.h"

/**
 * _memcpy - Copies memory
 * @dest: destination
 * @src: source
 * @n: size
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
