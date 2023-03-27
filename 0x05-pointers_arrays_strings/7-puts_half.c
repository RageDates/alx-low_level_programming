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

	if (len % 2 == 0)
	{
		for (i = 0; i < len / 2; i++)
			printf("%c", str[i]);
	}
	else
	{
		for (i = 0; i <= len / 2; i++)
			printf("%c", str[i]);
	}
	printf("\n");
}
