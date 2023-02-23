#include <stdio.h>

/**
 * main - prints the sum of even values
 * in a fibonacci sequence not greater than 4,000,000
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 1, j = 2, sum = 0, k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
