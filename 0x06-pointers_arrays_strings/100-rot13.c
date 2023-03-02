#include "main.h"

/**
 * rot13 - Encodes a string using rot13 - Rotate 13 places
 * @str: string to be encoded.
 * Return: encoded string.
 */

char *rot13(char *str)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
