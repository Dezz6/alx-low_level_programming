#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2 to be concatenated
 * Return: pointer to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;
	char *c;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		c = malloc(sizeof(char) * (length1 + n + 1));
	else
		c = malloc(sizeof(char) * (length1 + length2 + 1));

	if (c == NULL)
		return (NULL);

	while (i < length1)
	{
		c[i] = s1[i];
		i++;
	}

	while (n < length2 && i < (length1 + n))
		c[i++] = s2[j++];
	while (n >= length2 && i < (length1 + length2))
		c[i++] = s2[j++];

	c[i] = '\0';

	return (c);
}
