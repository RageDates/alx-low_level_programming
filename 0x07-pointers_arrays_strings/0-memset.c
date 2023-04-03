#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: The character to be filled
 * @b: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
		*i++ = (unsigned char)b;
	return (s);
}
