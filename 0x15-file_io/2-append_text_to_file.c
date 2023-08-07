#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: integer length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * append_text_to_file - appends text file to the end of a text
 * @filename: name of the file, if NULL, return -1
 * @text_content: contents of the file, if NULL, return -1, if file 1
 * Return: 1 success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0;
	int appendfile;
	int len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	appendfile = open(filename, O_WRONLY | O_APPEND);
	if (appendfile == -1)
	{
		return (-1);
	}
	if (len)
	{
		bytes = write(appendfile, text_content, len);
	}
	close(appendfile);
	if (bytes == len)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (bytes);
}
