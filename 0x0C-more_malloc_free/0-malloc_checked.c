#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * if malloc_checked fails, return 98
 * Return: pointer to the located memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
