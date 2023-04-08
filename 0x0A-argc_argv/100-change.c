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
	int ARG = atoi(argv[1]);
	int change;

	printf("%d\n", argc);
	if (argc != 2)
	{
		printf("Error\n");
		return;
	}
	if (ARG < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = (ARG / 25) +
			(ARG % 25) / 10 +
			((ARG % 25) % 10) / 5 +
			(((ARG % 25) % 10) % 5) / 2 +
			(((ARG % 25) % 10) % 5) % 2;
		printf("%d\n", change);
		return (change);
	}
}
