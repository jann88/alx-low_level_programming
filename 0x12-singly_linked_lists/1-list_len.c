#include "lists.h"
/**
 * list_len - prints the number of elements in a linked list
 * @h: poiner to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
