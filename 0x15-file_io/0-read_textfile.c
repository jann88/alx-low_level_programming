#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to POSIX S/O
 * @filename: a pointer to the filename to write
 * @letters: no of letters it should print
 * if the file cannot be opened/read/NULL return 0, write fails return 0
 *
 * Return: actual number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	ssize_t newfile;
	char buf[BUFF_SIZE * 8];

	if ((filename == NULL) || !letters)
		return (0);
	newfile = open(filename, O_RDONLY);
	if (newfile == -1)
	{
		return (0);
	}
	bytes = read(newfile, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	/*free(buf);*/
	close(newfile);
	return (bytes);
}
