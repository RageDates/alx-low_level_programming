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
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s);
		i++;
	}
	return (NULL);
}

