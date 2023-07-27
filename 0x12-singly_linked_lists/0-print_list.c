#include "lists.h"
#include <stdio.h>
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
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
	}
	return (i);
}
