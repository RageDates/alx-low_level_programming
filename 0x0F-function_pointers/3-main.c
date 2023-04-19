#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: nb of arguments
 * @argv: array of arguments
 *
 * Return: 1 success
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);
	op_func_t func = get_op_func(operator);

	if (argc > 4)
		return (0);
	if (func == NULL)
	{
		printf("Error");
		return (0);
	}
	printf("%d\n", func(num1, num2));
	return (1);
}
