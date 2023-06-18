#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * print smallest possible combinations of 3 digits
 * use putchar and print in ascending order
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	int j;

	int k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 9; k++)
			{
				if (i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				else
				{
					putchar('\n');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}

