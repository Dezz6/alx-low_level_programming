#include "main.h"

/**
 * is_digit - Checks if a string has an integer
 * @c: string to be checked
 * Return: 0 if true.
 */

int is_digit(char *c)
{
	int idx = 0;

	while (c[idx])
	{
		if (c[idx] < '0' || c[idx] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - Checks for the length of a string
 * @s: string to be checked
 * Return: length of @s
 */
int _strlen(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
		idx++;
	return (idx);
}
/**
 * error - handles errors
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive integers
 * @argc: count of arguments
 * @argv: arguments array
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, dig1, dig2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);

	if (!res)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			carry += res[len1 + len2 + 1] + (dig1 * dig2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);

	return (0);
}
