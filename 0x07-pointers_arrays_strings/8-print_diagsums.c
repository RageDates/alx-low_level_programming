#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - sum of both diagonals
 * @a: the array of numbers
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}
		for (j = size - 1, i = 0; j >= 0; i++, j--)
			sum2 += a[i][j];
	printf("%d, %d", sum1, sum2);
}
