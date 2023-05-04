#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: the nb
 * @m: the other nb
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ptr = n ^ m;
	unsigned int counter = 0;

	for (; ptr != 0; counter += ptr & 1, ptr >>= 1)
	{
	}
	return (counter);
}

