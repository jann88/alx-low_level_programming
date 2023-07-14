#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concancates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: allocated memory
 * Return: returned pointer points to the new array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len, s2_len, total_len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (n >= s2_len)
	{
		n = s2_len;
	}
	else
	{
		total_len = (s1_len + n);
	}
	ptr = malloc(s1_len + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_len; i++)
	{
		if (i < s1_len)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - s1_len];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

