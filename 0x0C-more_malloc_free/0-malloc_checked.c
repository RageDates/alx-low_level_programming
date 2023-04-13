#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory
 * @b: the number
 *
 * Return: something
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
