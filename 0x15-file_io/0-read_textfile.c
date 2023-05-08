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
	FILE *fp;
	char *buf;
	ssize_t Bread, Bwrite;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}

	Bread = fread(buf, 1, letters, fp);
	if (Bread <= 0)
	{
		free(buf);
		fclose(fp);
		return (0);
	}

	Bwrite = write(STDOUT_FILENO, buf, Bread);
	free(buf);
	fclose(fp);

	if (Bwrite != Bread)
		return (0);

	return (Bwrite);
}
