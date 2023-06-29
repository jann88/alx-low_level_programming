#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concancates a string
 * @dest - pointer to destination input
 * @src - pointer to source input 
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0;src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
