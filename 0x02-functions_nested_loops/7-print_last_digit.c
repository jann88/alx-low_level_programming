#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be tested
 * Return: 0 (success)
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (n < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
