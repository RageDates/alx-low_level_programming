#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point for the function
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = (argv[1] / 25) +
			(argv[1] % 25) / 10 +
			((argv[1] % 25) % 10) / 5 +
			((argv[1] % 25) % 10) % 5
		return (change);
	}
}
