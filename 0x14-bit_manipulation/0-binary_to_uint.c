#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: a pointer to binary codes
 * Return:converted integr or 0 if there other char other that 0 and 1
 * if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int slen = strlen(b);
	unsigned int total = 0;
	unsigned int decval = 1;
	unsigned int i;

	if (b != 0 || b != 1 || b == NULL)
	{
		return (0);
	}
	for (i = (slen - 1); i > 0; i--)
	{
		if (b[i] == '1')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}
