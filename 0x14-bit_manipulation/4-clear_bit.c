#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: pointer to the binary code
 * @index: index of the bit to set to zero
 * Returns: 1 if it works and -1 on failing
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = ~(1UL << index);
	unsigned int bit = sizeof(unsigned long int) * 8;

	if (index >= bit)
	{
		return (-1);
	}
	*n &= bitmask;
	return (1);
}
