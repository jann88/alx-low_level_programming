#include "main.h"
/**
 * _isalpha - checks for alphebitical character
 * Return: 1 if character i a letter
 * otherwise return should be 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
