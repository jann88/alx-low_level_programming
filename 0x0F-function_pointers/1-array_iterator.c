#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - maps through an array through a func pointer
 * @size: size of an array
 * @array: given int array
 * @action: function pointer you need to use
 * Return: given array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *n = array + size - 1;

	if (array && action && size)
	{
		while (array <= n)
		{
			action(*array++);
		}
	}
}
