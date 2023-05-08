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
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read <= 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	fclose(fp);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
