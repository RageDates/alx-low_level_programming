#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the alphabet
 * @c: the number to be checked
 *
 * Return: 1 if true
 */
int print_last_digit(int c)
{
	int last;

	if (c < 0)
		c = -c;
	last = c % 10;
	printf("%d", last);
	return (last);
}
