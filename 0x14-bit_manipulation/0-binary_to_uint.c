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
	unsigned int total = 0;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		char ch = b[i];

		if (ch == '0')
		{
			total = total << 1;
		}
		else if (ch == '1')
		{
			total = (total << 1) | 1;
		}
		else
			return (0);
	}
	return (total);
}
