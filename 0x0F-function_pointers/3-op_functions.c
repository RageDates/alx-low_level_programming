#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divise 2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the division of the two numbers
 */
int op_div(int a, int b)
{
	if (b == 0 || a == 0)
		return (0);
	return (a / b);
}
/**
 * op_mod - remaider of  2 numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the reminder of the two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
