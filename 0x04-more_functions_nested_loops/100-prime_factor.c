#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints thelargest prime factorof the number 612852475143
 * followedby a newline
 * Return: always 0
 */

int main(void)
{
	long i, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxf = number / i;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
