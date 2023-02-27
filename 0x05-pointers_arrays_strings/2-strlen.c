#include "main.h"

/**
 * _strlen - This func returns the length of a string.
 * @s: String for which length is to be returned
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
