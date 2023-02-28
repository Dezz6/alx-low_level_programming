#include "main.h"

/**
 * rev_string - Reverses a string and prints to stdout
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int len_0 = 0, len_1 = 0, i;
	char ss;

	while (s[len_0] != '\0')
	{
		len_0++;
	}

	len_1 = len_0 - 1;

	for (i = 0; i < len_0 / 2; i++)
	{
		ss = s[i];
		s[i] = s[len_1];
		s[len_1--] = ss;
	}

}
