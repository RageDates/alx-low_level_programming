#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: The number
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
