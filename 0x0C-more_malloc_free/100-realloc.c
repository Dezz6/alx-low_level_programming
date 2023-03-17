#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: Size in bytes of previous memory block
 * @new_size: Size in bytes of new memory block
 * Return: pointer if new size is equal to old size,
 * NULL if new size is 0 and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
