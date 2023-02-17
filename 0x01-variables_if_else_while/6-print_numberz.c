#include <stdio.h>
/**
 * main - print single numbers of base 10 from 0, with no variable of type char
 * Return: 0 (Success)
 */
int main(void)
{

	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
