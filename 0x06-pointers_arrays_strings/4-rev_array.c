#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: the array of int
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
		
}
