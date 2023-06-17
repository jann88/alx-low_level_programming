#include <stdio.h>
/**
 * main - Enrty level
 * prints alphbets in lowercase followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'c')
	{
		putchar(c);

		c++;
	}
	putchar('\n');
	return (0);
}
