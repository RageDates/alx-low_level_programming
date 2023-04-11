#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints the alphabet
 * @grid: the pointer to the pointer
 * @height : the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
