#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: given integer value
 * Do not use arrays, malloc, % and /
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1UL << 63; i != 0; i = i >> 1)
	{
		if ((n & i) == '0') 
		{
			_putchar('0');
			n++;
		}
		if ((n & i) == '1')
		{
			_putchar('1');
			n++;
		}
		
	}
}
