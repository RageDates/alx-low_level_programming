#include "main.h"

/**
 * _islower - Check if an integer is lower case
 * @c : The number to be checked
 *
 * Return: 1 if it is lower case. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
