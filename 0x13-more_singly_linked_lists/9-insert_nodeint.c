#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer listint_t first node
 * @idx: index where the new node should be added, starts at zero
 * @n: given list size to be added
 * Return: address of the new node, NULL if it fails
 * if its not possible to add a new node to a list at idx, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);

}
