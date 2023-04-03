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

	while (n--)
		*j++ = *i++;
	return (dest);
}
