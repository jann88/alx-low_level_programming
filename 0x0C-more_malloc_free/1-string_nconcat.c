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
	unsigned int s1_len, s2_len, i, j;

	/*check if the strings passed are NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the length of the string*/
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/**
	 *if (n >= s2_len)
	 *n = s2_len;
	 *else
	 *total_len = (s1_len + n);
	 */
	/* memory allocation for both s1 and s2*/
	ptr = malloc(s1_len + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*copy first string in ptr*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	/* copy second string into ptr*/
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

