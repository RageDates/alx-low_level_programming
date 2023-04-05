#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the char to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		printf("%c", *s);
	}
	else
		printf("\n");
}
