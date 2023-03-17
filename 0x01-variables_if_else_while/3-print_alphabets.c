#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	for (j = 'A' ; j <= 'Z'; ++j)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
