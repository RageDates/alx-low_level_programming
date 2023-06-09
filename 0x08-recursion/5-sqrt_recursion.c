#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * r_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int r_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (r_recursion(n, i + 1));
}


/**
 * _sqrt_recursion - the natural square root of a nb
 * @n: the number to be calculated
 *
 * Return: the natural square root of a nb
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (r_recursion(n, 0));
}
