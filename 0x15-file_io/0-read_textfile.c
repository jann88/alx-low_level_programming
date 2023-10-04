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
	ssize_t O, R, W;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);
	O = open(filename, O_RDONLY);
	R = read(O, buffer, letters);
	W = write(STDOUT_FILENO, buffer, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(buffer);
		close(O);
		return (0);
	}
	free(buffer);
	close(O);
	return (W);
}
