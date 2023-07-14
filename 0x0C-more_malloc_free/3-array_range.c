#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of intergers
 * @min: values from min
 * @max: values from max
 * if min > max , return NULL
 * if malloc fails return NULL
 * Return: ointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	ptr = (int *)malloc(len * sizeof(int));
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
