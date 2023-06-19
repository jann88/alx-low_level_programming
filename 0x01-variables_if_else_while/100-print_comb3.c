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
	int i = '0';

	int j = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j) || (i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '1';

		i++;
	}
	return (0);
}
