#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
