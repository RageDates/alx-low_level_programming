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
	if (d == NULL)
		exit(0);
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
