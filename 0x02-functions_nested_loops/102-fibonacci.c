#include <stdio.h>

/**
* main -prints the first 50 Fibonacci numbers
* starting with 1 and 2.
*
* Return: 0 always
*/

int main(void)
{
	long int i = 1, j = 2, k;
	int count = 2;

	printf("%lu, ", i);

	while (count <= 50)
	{
		if (count == 50)
			printf("%lu\n", j);
		else
			printf("%lu, ", j);

		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
