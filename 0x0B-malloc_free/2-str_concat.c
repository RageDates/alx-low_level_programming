include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the string to be concatenated
 * @s2: the second string to be concatened
 *
 * Return: Null on failure else return pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i;
	char *ptr;
	unsigned long int length = strlen(s1) + strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = (char *)malloc(length * sizeof(char));
	strcat(s1, s2);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = s1[i];
	return (ptr);
}
