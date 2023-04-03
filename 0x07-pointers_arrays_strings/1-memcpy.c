#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - fills memory with a constant byte
 * @dest: The character to be filled
 * @src: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i = dest;
	char *j = src;
	int k;

	for (k = 0; k < n; k++)
		i[k] = j[k];
	return (dest);
}
