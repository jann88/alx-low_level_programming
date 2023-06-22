#include "main.h"
/**
 * _isdigit - checks for digit from 1 through 0
 * @c: character to be checked
 * Return: 0 (success)
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
