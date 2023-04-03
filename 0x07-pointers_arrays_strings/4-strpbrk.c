#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - prints the alphabet
 * @s: the number to be checked
 * @accept: a char
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s)
	{
		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (NULL);
}

