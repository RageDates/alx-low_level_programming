#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, count = 1;
	int count2 = 2;

	for (i = 0; i <= 7; i++)
	{
		for (j = count; j <= 8; j++)
		{
			for (k = count2; k <= 9; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		count++;
		count2++;
	}
	putchar('\n');
	return (0);
}
