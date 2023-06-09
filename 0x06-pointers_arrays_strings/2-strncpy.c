#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number
 *
 * Return: the destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
