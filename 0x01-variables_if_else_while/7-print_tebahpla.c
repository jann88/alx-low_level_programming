#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * prints lowercase alphabets in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);

		c--;
	}
	putchar('\n');
	return (0);
}

