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

	for (i = 0; i <= 9; i++)
		putchar(48 + i);
	for (i = 'a'; i <= 'f'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}

