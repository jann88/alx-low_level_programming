#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number in bits, 0 and 1
 * @index: index of the bit you want to get
 * Return: value of bit at index, -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	unsigned int total = n & mask;

	if (total == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
