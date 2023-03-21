#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the alphabet
 * @n: the number to be checked
 *
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					printf("%d", k);
				else if (k < 10 && j != 0)
					printf(",   %d", k);
				else if (k >= 10 && k < 100)
					printf(",  %d%d", k / 10, k % 10);
				else if (k >= 100)
					printf(", %d%d%d", k / 100, (k / 10) % 10, k % 10);
			}
			printf("\n");
		}
	}
}
