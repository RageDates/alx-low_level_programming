include "main.h"

/**
 * _islower - Check if an integer is lower case
 * @c : The number to be checked
 *
 * Return: 1 if it is lower case. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
