#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int argument
 * @av: char argument
 *
 * Return: a pointer else NULL is failure
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t length = 0, position = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	ptr = (char *) malloc(length * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(ptr + position, av[i]);
		position += strlen(av[i]);
		ptr[position++] = '\n';
	}
	return (ptr);
}
