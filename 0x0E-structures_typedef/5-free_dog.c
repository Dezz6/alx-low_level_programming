#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: dog(s) to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
