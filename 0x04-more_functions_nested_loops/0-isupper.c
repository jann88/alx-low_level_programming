#include "main.h"
/**
 * __isupper - checks for upper character
 * @c: is character to be tested
 * Return: 1 if uppercase, otherwiser return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
