#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number
 *
 * Return: the destination pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	int len = strlen(src);

	while (dest[i] != '\0')
		i++;
	if (len < n)
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		for (j = 0; j < n; i++, j++)
			dest[i] = src[j];
	}
	return (dest);
}
