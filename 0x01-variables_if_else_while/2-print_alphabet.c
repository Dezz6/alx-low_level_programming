#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= '2')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
