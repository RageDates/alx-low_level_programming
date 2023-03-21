#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * Return: 0 (success)
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabe_x10();
	return (0);
}
/**
 * print_alphabet_x10 - prints the alphabet
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(48 + i);
		_putchar(\n);
	}
}
