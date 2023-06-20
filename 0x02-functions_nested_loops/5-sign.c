#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: character to be checked
 * Return: if plus 1, if 0 return 0, if minus return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
