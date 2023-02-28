#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int idx = 0;

	while (s[idx])
		idx++;
	while (idx--)
		_putchar(s[idx]);
	_putchar('\n');
}
