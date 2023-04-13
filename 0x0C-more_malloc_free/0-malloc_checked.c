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
	int *ptr;

	ptr = (int *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
		exit(98);
}
