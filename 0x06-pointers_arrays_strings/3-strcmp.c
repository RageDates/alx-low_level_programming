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

	if (len1 < len2)
		return (-1);
	if (len1 > len2)
		return (1);
	if (len1 == len2)
		return (0);
}
