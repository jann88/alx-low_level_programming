#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: pointer to an integer array
 * @size: number of elements in array
 * @cmp: function pointer that take an int as an
 * arguement and returns an int
 * Return: first element for which cmp does nt return
 * 0, if no element matches && size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i <= size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
