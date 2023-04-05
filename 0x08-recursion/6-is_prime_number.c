#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_prime_number - check if n prime nb
 * @n: the number to be checked
 *
 * Return: 1 (prime nb) else 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (1);
}
