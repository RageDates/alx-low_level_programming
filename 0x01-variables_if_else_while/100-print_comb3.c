#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, count = 1;

	for (i = 0; i <= 8; i++)
	{
		for (j = count; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (j != 9 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		count++;
	}
	putchar('\n');
	return (0);
}
