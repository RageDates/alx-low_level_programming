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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
