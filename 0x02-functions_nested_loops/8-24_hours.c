#include "main.h"
#include <stdio.h>

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
				_printf("0");
			printf("%d", i);
			printf(":");
			if (j < 10)
				printf("0");
			printf("%d", j);
			printf("\n");
		}
	}
}
