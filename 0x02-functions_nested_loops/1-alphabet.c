#include "main.h"

/**
 * print_alphabet - prints the alphabet
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(48 + i);
	_putchar('\n');
}
