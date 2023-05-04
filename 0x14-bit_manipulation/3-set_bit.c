#include <stdio.h>
#include "main.h"
/**
 * set_bit - the index bit is set to 1
 * @n: pointer to the nb
 * @index: the index
 *
 * Return: 1 if success, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1UL << index));
	return (1);
}
