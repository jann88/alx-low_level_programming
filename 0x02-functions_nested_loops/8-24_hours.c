#include "main.h"
/**
 * jack_bauer - prints every minute of the day for a specified
 * person from 00:00 to 23:59
 * assumed to be an integer
 * Return: 0 (success)
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
