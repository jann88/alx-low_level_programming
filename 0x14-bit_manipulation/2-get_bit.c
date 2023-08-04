#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number in bits, 0 and 1
 * @index: index of the bit you want to get
 * Return: value of bit at index, -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitVal;

	if (index > 63)
	{
		return (-1);
	}
	bitVal = (n >> index) & 1;
	return (bitVal);
}
