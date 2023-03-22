#include "function_pointers.h"

/**
 * array_iterator - Iterate through the indexes of an array
 * @array: Array
 * @size: Size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
