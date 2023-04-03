#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - prints the alphabet
 * @s: the char to be checked
 * @accept: the substring
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (s[i] == accept[i])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
