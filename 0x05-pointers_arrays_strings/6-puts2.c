#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints the alphabet
 * @str: the number to be checked
 */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i = i + 2)
		printf("%c", str[i]);
	printf("\n");
}
