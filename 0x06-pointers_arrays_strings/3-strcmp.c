#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if true
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i, count = 0;

	if (len1 < len2)
		return (-1);
	if (len1 > len2)
		return (1);
	if (len1 == len2)
	{
		for (i = 0; i < len1; i++)
		{
			if (s1[i] == s2[i])
				count++;
		}
		if (count == len1)
			return (0);
		else
			return (1);
	}
}
