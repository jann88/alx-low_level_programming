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
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	/*open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (_read);
}
