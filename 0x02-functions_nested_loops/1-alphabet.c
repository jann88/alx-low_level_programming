#include "main.h"
/**
 * print_alphabet - Entry level
 *print_alphabet - prints lowercase alphabets
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
