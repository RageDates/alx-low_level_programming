#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFSIZE 1024

/**
 * main - copie a file to another file
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if success, or exit if error
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, Bread, Bwrite;
	char buf[BUFSIZE];
	mode_t file_perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perms);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);

	while ((Bread = read(fd_from, buf, BUFSIZE)) > 0)
	{
		Bwrite = write(fd_to, buf, Bread);
		if (Bwrite != Bread || Bwrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	}

	if (Bread == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_to), exit(100);

	return (0);
}

