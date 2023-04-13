#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create range of int
 * @min: the min number
 * @max: the max number
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
