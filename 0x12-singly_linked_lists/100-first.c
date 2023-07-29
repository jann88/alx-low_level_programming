#include <stdio.h>
/**
 * first- prints out statements followed by new line
 * before the main function
 *
 * Return: 0 Always success
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
