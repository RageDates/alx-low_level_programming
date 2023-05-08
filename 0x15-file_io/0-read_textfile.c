#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read a textfile and print it ot the posix output
 * @filename : a pointer to the file
 * @letters : the nb of letters to be printed
 *
 * Return: the actual number of letter that could be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t counter;
	FILE *fOpen;

	fOpen = fopen("filename.txt", "r");
	if (fOpen == NULL)
		return (0);
	while (letters)
	{
		while (fgetc(fOpen) != EOF)
		{
			printf("%c", fgetc(fOpen));
			counter++;
		}
		letters--;
	}
	fclose(fOpen);
	return (counter);
}
