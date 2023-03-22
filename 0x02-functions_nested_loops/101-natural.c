#include "main.h"

/**
 * main - prints the alphabet
 * Return: 0 if true
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1025; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
		printf("%d\n", sum);
		return (0);
	}
}
