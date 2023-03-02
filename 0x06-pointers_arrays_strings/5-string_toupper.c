#include "main.h"

/**
 * string_toupper - Changes letters of a string to uppercase.
 * @str: string to convert
 * Return: converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
