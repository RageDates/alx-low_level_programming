#include "main.h"

/**
 * jack_bauer - prints the alphabet
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i);
			_putchar(':');
			if (j < 10)
				_putchar('0');
			_putchar(j);
			_putchar('\n');
		}
	}
}
