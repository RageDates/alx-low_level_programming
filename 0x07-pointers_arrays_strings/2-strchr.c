#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - prints the alphabet
 * @s: the char to be checked
 * @c: the occurence
 *
 * Return: pointer to the 1st occurrence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}

