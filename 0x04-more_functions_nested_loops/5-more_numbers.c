#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the alphabet
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
			_putchar(j + '0');
	       printf("\n");
	}
}
