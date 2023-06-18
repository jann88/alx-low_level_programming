#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * prints combinations of single digits
 * seperated by a comma and space to base 10 using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
