#include "main.h"

/**
 * _strstr - Search and locate a substring
 * @haystack: string to be searched
 * @needle: string to search
 * Return: pointer to the first occurence of @needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
