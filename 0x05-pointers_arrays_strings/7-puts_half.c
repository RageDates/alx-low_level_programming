#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to ouput
 */
void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = (len - 1) / 2 + 1; i < len; i++)
		printf("%c", str[i]);
	printf("\n");
}
