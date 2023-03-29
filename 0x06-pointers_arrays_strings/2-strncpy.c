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
	int len = strlen(src);

	if (n < len)
	{
		for (i = 0; i < n - 1; i++)
			dest[i] = src[i];
		dest[n - 1] = '\0';
	}
	else
	{
		for (i = 0; i <= len; i++)
			dest[i] = src[i];
	}
	return (dest);
}
