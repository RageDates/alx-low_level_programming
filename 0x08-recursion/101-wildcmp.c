#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * wildcmp - are two strings identical
 * @s1: the first string to be checked
 * @s2: the second string to be checked
 *
 * Return: 1 if success else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
		return (1);
	return (0);
}

