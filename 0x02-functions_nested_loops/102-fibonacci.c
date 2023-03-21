#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, fib = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			fib = fib + i;
	}
	printf("%d\n", fib);
	return (0);
}
