#include "main.h"
/**
 * get_bit - returns the value of abit at a given index
 * @n: given no of bits, 0 and 1
 * @index: index of the bit you want to get
 * Return: value of bit at index, -1 incase of erroe
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitValue;

	if (index > 63)
	{
		return (-1);
	}
	bitValue = (n >> index) & 1;
	return (bitValue);
}
