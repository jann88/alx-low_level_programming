#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 * Return: half of the string
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
