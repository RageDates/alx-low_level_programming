#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable struct
 * @d: pointer to struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("OK\n");
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
