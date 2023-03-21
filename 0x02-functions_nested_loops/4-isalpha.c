#include "main.h"

/**
 * _isalpha - prints the alphabet
 * @c: the number to be checked
 *
 * Return: 1 if true
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
