#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: given number whose binary representation needs to be printed
 * Do not use arrays, malloc, % and /
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}

