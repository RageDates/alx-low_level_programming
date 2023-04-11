#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  - prints the alphabet
 * @: the number to be checked
 */
char* argstostr(int ac, char** av)
{
	size_t length = 0, position = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (int i = 0; i < ac; i++) {
		length += strlen(av[i]) + 1;
	}
	ptr = (char*) malloc(length * sizeof(char));
	if (ptr == NULL) {
		return (NULL);
	}
	for (int i = 0; i < ac; i++) {
		strcpy(ptr + position, av[i]);
		position += strlen(av[i]);
		ptr[position++] = '\n';
	}
	return (ptr);
}
