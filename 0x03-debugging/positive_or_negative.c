#include "main.h"
/**
 * positive_or_negative - determine if a number is positive
 * negative or zero
 * @i: where testing starts
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{
	i = 0;

	if (i < 0)
	{
		printf("%i is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%i is %s\n", i, "positive");
	}
	else
	{
		printf("%i is %s\n", i, "zero");
	}
	return;

}
