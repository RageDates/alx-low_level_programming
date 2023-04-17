#include "dog.h"
#include <stdlib.h>
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
	print("Name: %s\n", (*d).name);
	print("Age: %.6f\n", (*d).age);
	print("Owner: %s\n", (*d).owner);
}
