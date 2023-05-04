#include <stdio.h>
#include "main.h"
/**
 * get_bit - return value of the index
 * @n: the int
 * @index: the index
 *
 * Return: the value of the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
