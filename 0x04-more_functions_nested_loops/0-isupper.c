#include "main.h"

/**
 * _isupper - prints the alphabet
 * @c: the number to be checked
 *
 * Return: 1 if true
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
