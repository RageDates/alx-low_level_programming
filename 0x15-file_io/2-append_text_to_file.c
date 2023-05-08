#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * append_text_to_file - Adds text to the end of a file
 *
 * @filename: The name of the file
 * @text_content: The text to append to the file
 *
 * Return: 1 if success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t Bwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		Bwrite = write(fd, text_content, len);
		if (Bwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

