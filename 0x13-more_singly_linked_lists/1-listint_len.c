#include "lists.h"
/**
 * listint_len - prints number of elements in alinked list
 * @h: pointer to the first node
 * Return: total length
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
