#include "main.h"
#include <string.h>
/**
 * create_file - creates a file with rw------- permissions
 * @filename: name of the file, if NULL, return -1
 * @text_content: contents of the file, if NULL , return -1i
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0;
	int newfile;
	ssize_t len = strlen(text_content);

	if (!filename)
	{
		return (-1);

	}
	newfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newfile == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(newfile);
		return (1);
	}
	if (len)
		bytes = write(newfile, text_content, len);
	close(newfile);
	return (bytes == len? 1 : 1);
}

