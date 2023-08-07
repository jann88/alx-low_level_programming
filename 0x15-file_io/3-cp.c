#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 on success, 0 on failure
 */
int main(int argc, char *argv[])
{
	ssize_t bytes;
	int file_from = 0;
	int file_to = 0;
	char buf[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
		exit(99);
	}
	while ((bytes = read(file_from, buf, BUFF_SIZE)) > 0)
	{
		if (write(file_to, buf, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
		}
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
		}
	}
	free(buf);
	file_from = close(file_from);
	file_to = close(file_to);
	if ((file_from) || (file_to))
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
	}
	return (EXIT_SUCCESS);
}
