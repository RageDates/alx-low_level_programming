#include "main.h"

/**
 * print_diagonal - prints the alphabet
 * @n: the number to be checked
 *
 */
void print_diagonal(int n)
{
	int i, j, count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < count; j++)
				_putchar(' ');
			count++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
