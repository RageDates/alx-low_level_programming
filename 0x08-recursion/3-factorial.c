#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * factorial - the fact of a given number
 * @n: the number to be calculated
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
