#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the alphabet
 * @n: the number to be checked
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
