#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * if new_size > old_size, added memory to not be initialized
 * if new_size === old_size, return ptr
 * if ptr == NULL , call equal to malloc(new_size)
 * for old_size and new_size
 * (if new_size == 0 && ptr != NULL) == free(ptr), return NULL
 * free ptr
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		p = (malloc(new_size));
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
			free(ptr);
		}
	}
	return (p);
}
