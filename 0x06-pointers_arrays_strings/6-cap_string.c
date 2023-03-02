#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: string of words to be capitalized
 * Return: str
 */

char *cap_string(char *str)
{
	int cnt = 0, i;
	int word_sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + cnt) > 96 && *(str + cnt) < 123)
		*(str + cnt) -= 32;
	cnt++;
	while (*(str + cnt) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + cnt) == word_sep[i])
			{
				if ((*(str + (cnt + 1)) > 96) && (*(str + (cnt + 1)) < 123))
					*(str + (cnt + 1)) -= 32;
				break;
			}
		}
		cnt++;
	}
	return (str);
}
