#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: The new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New = (dog_t *)malloc(sizeof(dog_t));

	if (New == NULL)
	{
		free(New);
		return (NULL);
	}
	New->name = (char *)malloc(strlen(name) + 1);
	if (New->name == NULL)
	{
		free(New);
		return (NULL);
	}
	strcpy(New->name, name);
	New->owner = (char *)malloc(strlen(owner) + 1);
	if (New->owner == NULL)
	{
		free(New->owner);
		free(New);
		return (NULL);
	}
	strcpy(New->owner, owner);
	New->age = age;
	return (New);
}

