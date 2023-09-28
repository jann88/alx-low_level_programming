#include "main.h"
/**
 * flip_bits - a function that returns number of bits
 * you need to get from one number to another
 * @n: first number to compare
 * @m: second number to compare
 * Do not use operators
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total, count = 0;

	total = n ^ m;
	while (total != 0)
	{
		count = count + 1;
		total = total & (total - 1);
	}
	return (count);
}

