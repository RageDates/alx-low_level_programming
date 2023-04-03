#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  - prints the alphabet
 * @: the number to be checked
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
