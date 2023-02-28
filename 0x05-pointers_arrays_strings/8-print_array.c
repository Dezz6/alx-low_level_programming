#include "main.h"
#include "stdio.h"

/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line.
 * @a: array of integers
 * @n: number of times to print elements in array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
