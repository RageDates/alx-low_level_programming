#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(98);
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\n", (*d).name);
	printf("Age: %.6f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
