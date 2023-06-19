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
	int i, j, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');

					}
				}
			}

		}

	}
	putchar('\n');
	return (0);
}

