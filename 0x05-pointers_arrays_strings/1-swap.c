#include "main.h"

/**
 * swap_int - Takes the values of two integers and swaps them.
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
