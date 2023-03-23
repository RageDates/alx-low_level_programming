#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	long int n;
	long int Max;
	long int i;

	n = 612852475143;
	Max = -1;

	while (n % i == 0)
	{
		Max = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			Max = i;
			n = n / i;
		}
	}
	if (n > 2)
		Max = n;
	printf("%ld\n", Max);
	return (0);
}
