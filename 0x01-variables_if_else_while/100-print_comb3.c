#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * prints all possible different combinations of 2 digits
 * use putchar function
 * the two digits must be different
 * print only the smallest combinations of 2 digits
 * do not use any variables of type char
 * Numbers should be printed in ascending order, with two digits
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
