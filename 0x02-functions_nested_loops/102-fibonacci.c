#include <stdio.h>
/**
 * main - Entry level
 * prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (success)
 */
int main(void)
{
	int count;

	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
			printf(" ");
		}
	}
	return (0);
}
