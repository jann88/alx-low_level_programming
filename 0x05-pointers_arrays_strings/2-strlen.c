#include "main.h"
#include <stdio.h>
/**
 * _strlen -  returns the length of a string
 * @s: character in a string
 * Return: length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
