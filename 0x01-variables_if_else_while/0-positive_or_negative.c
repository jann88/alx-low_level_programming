#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * Examines if a number is positive, negative or a zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		(n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

