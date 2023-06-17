#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * prints alphabets except q and e using putchar
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
		{
			putchar(c);
		}

		c++;
	}
	return (0);
}

