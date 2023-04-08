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
	int ARG = atoi(argc[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
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
			((ARG % 25) % 10) % 5
		return (change);
	}
}
