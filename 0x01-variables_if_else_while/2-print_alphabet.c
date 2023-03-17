#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	return (0);
}
