#include "main.h"

/**
 * _puts -  Prints a string followed by the new line to stdout
 * @str: String to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('n\');
}
