#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * prints all numbers of base 16 in lowecase using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	while (c < 'g')
	{
		putchar(c);

		c++;
	}
	putchar('\n');
	return (0);
}
