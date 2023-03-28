#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: the number to be checked
 * @src : the sources
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	*src = *dest;
	return (dest);
}
