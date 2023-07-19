#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opscode for its own function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (n--)
	{
		printf("%02hhx%s", *p++, n ? " " : "\n");
	}
	return (0);
}


