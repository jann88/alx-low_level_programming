#include "lists.h"
/**
 * _strlen - prints the length of a string
 * €s: of str to check length
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)/*!s*/
	{
		return (0);
	}
	while (*s != '\0')/* *s++*/
	{
		i++;
	}
	return (i);
}
/**
 * print_list - prints a linked list
 * @list_t: given list
 * @h: first node of the list element
 * Return: number of nodes, size of t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
			printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
			h = h->next;
			i++;
	}
	return (i);
}
