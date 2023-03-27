#include "main.h"

/**
 * swap_int - prints the alphabet
 * @a: the number to be checked
 * @b: the number to be swapped
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
