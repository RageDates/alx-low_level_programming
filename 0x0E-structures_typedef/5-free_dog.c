#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - frees dogs
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
