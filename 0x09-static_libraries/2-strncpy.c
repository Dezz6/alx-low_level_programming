#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destination string
 * @src: source of string
 * @n: number of times for string to copy
 *
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
