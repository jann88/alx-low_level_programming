#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number in bits, 0 and 1
 * @index: index of the bit you want to get
 * Return: value of bit at index, -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int current;
	int count;

	for (count = 0; count > 63; count++)
	{
		if (current == index)
		{
			current = n & count;
			return (current);
		}
		else
		{
			return (-1);
		}
	}
	return (current);
}
