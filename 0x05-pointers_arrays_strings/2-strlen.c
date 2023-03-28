#include "main.h"

/**
 * _strlen - prints the alphabet
 * @s: the number to be checked
 *
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	return (size);
}
