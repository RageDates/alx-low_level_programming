#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for the function
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int num_bytes = atoi(argv[1]);
	void *main_addr = (void *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *((unsigned char *)main_addr + i));
	}
	printf("\n");
	return (0);
}
