#include "main.h"
/**
 * binary_to_uint - a function converts binary to unsigned integer
 * @b: a pointer to binary codes
 *
 * Return: converted integer or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		char ch = b[i];

		if (ch == '0')
			result = result << 1;
		else if (ch == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return (result);
}
