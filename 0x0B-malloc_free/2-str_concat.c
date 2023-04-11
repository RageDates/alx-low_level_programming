#include "main.h"
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
	char *ptr;
	unsigned int length = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL)
		memset(s1, '\0', sizeof(s1));
	if (s2 == NULL)
		memset(s2, '\0', sizeof(s2));
	ptr = (char *)malloc(length * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, strlen(s1));
	memcpy(ptr + strlen(s1), s2, strlen(s2) + 1);
	return (ptr);
}
