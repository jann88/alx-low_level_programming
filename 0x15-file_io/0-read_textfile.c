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
	ssize_t fd, _read, _write;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	if (buffer == NULL)
		return (0);
	fd = open(filename,O_RDONLY);
	_read = read(fd, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);
	if (fd == -1 || _read == -1 || _write == -1 || _write != _read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (_read);
}
