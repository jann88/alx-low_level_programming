#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * prints single digit numbers of base 10 using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
