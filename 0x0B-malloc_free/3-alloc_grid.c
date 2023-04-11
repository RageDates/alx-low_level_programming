include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - points to a 2 dim array of int
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr = malloc(width * height * sizeof(int));
		for (j = 0; j < width; j++)
			


