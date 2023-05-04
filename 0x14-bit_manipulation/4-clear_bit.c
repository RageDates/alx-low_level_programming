#include <stdio.h>
#include "main.h"
/**
 * clear_bit - clear the bit index
 * @n: the number
 * @index: the index
 *
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n & ~(1UL << index));
	return (1);
}
