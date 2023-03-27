#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 2; i > 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
