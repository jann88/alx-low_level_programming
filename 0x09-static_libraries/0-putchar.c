#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: characte to print
 * Return: on success 1.
 * on erroe , -1 is returned and error no is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
