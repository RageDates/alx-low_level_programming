#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @c: specific char
 * @size: the size of the array
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int *ptr;
	int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < size; ++i)
		ptr[i] = c[i];
	return (ptr);
}
