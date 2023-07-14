#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @size: memory allocated in bytes
 * @nmemb: elements in an array
 * if nmemb or size is 0, calloc returns NULL
 * if malloc fails calloc returns NULL
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*pointer hold the base address of the block created*/
	char *ptr;
	unsigned int i, n;

	/*get the number of elements for the array*/
	n = size;
	i = nmemb;
	/*check if array id not null*/
	if (n == 0 || i == 0)
	{
		return (NULL);
	}

	/*dynamically allocate memory using calloc function*/
	ptr = (char *)calloc(i * n, sizeof(char));
	/*check if memory has been allocated correctly*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*get elements of the array*/
	for (i = 0; i < (i * n); i++)
	{
		ptr[i] = i + 1;
	}
	ptr[i] = '\0';
	return (ptr);


}
