#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _sqrt_recursion - the natural square root of a nb
 * @n: the number to be calculated
 *
 * Return: the natural square root of a nb
 */
int _sqrt_recursion(int n)
{
	int i = 5;

	if (i * i != n)
		return (i);
	return (-1);
}

