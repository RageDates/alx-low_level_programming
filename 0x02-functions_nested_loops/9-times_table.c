#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the times table
 */
void times_table(void)
{
	int i, j, l;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			l = i * j;
			if (j == 0)
				printf(" %d", l);
			if (l < 10 && j != 0)
				printf(", %d", l);
			else if (l >= 10)
				printf(", %d%d", l / 10, l % 10);
		}
		printf("\n");
	}
}
