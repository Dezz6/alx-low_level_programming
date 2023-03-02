#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: destination string
 * @src: source of string
 * @n: amount of bytes used by src
 *
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
