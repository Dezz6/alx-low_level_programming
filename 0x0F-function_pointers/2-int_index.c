#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to search from
 * @size: Size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element,
 * if no element matches, return -1 and,
 * if size is <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
