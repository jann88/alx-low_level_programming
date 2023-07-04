#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * n bytes from src memory area to dest memory area
 * @n: number of times to copy
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
