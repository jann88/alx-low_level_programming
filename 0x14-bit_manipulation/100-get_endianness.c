#include "main.h"
#include <stdio.h>
/**
 * get_endiannes - checks the endianness of the system
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;

	char *c = (char *) &num;

	if (*c == 1)
	{
		return (1); /* little endian */
	}
	else
	{
		return (0);/* big endian */
	}
}
