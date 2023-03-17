#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: minimum value
 * @max: maximumu value
 * Return: pointer to the newly created array,
 * NULL if min is greater than max and,
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	unsigned int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
