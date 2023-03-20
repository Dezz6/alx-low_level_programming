#ifndef _dog_h_
#define _dog_h_
#include "stdio.h"
#include "stdlib.h"

/**
 * dog_t - Typedef of struct, dog
 */
typedef struct dog dog_t;
/**
 * struct dog - Structure that stores certain info of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: struct dog stores information related to
 * the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
