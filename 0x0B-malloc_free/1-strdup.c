#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: Null if failure else return pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(strlen(str) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		ptr[i] = str[i];
	return (ptr);
}

