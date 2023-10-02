#include "main.h"
/**
 * create_file - creates a file with given text content
 * @filename: the name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, total = 1, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		total = write(file, text_content, count);
	}
	if (total == -1)
		return (-1);
	close(file);
	return (1);
}
