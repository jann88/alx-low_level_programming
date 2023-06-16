#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry level
 * tests whether the number is greater than 5, less than 6 or equals to zero
 *Prints the last digit(remainder) of a randomly genarated number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",  n, n % 10);
	}
	return (0);
}
