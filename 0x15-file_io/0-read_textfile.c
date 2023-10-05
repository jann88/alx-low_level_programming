#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * @filename: a pointer to the filename to write
 * @letters: no of letters it should print
 * if the file cannot be opened or read, return 0, if filename is NULL return 0
 * if write fails, return 0
 *
 * Return: actual number of the letters it could print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(fd);
	return (bytes);
}
