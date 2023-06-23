#include "main.h"
/**
 * print_numbers - prints digits from 0 through 9
 * followed by a new line
 * using _putchar
 * Return: 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

