#include "main.h"
/**
 * print_square - uses _putchar to print the sizes of a square
 * @size: size to be tested
 * Return: if size is <= 0, print a new line
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
