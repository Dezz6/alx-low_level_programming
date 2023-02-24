#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers 0-9
 *
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)

{

	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
