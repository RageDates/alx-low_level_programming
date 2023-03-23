#include "main.h"

/**
 * print_line - prints the alphabet
 * @n: the number to be checked
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
		_putchar('_');
}

