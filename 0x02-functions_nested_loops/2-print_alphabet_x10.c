#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;

	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
