#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be checked
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s++) + 1);
}
