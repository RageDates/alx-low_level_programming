#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(48 + i);
		putchar(',');
		putchar(' ');
	}
	putchar(48 + 9);
	return (0);
}
