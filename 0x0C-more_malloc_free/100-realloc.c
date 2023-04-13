#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @old_size: the old size
 * @new_size: the new size
 * @ptr: pointer to void
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	ptr2 = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		memcpy(ptr2, ptr, old_size);
	else
		memecpy(ptr2, ptr, new_size);
	free(ptr);
	return (ptr2);
}
