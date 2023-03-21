#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * Return: 0 (success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(48 + i);
	_putchar(\n);
}
