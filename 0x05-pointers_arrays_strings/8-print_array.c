#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints the alphabet
 * @a: the number to be checked
 * @n: the number where to stop
 */
void print_array(int *a, int n)
{
	int i, len = strlen(a);

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}

