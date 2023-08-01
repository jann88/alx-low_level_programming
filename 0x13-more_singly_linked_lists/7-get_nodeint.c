#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list
 * @head: a pointer to the first node in a listint_t list
 * @index: index of the node starting at 0
 * Return: node value or NULL if it fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	unsigned int count = 0;
	if (node == NULL)
	{
		return (NULL);
	}
	while (node != NULL)
	{
		if (count == index)
		{
			return (node);
		}
		count++;
		node = node->next;
	}
	return (node);

}
