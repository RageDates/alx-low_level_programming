#include "main.h"

/**
 * print_last_digit - prints the alphabet
 * @c: the number to be checked
 *
 * Return: 1 if true
 */
int print_last_digit(int c)
{
	int last = c % 10;

	_putchar(last + 48);
	return (last);
}
