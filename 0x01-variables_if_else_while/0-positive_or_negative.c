#include <stdio.h>
#include <time.h>
/**
 * main -Entry level
 *
 * Return: 
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 0);
	{
		return (-n);
	} else if(n > 0);
	{
		return (n);
	} else(n = 0);
	{
		return (0);
	}
}
