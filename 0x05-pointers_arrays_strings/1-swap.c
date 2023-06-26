#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps 2 integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
