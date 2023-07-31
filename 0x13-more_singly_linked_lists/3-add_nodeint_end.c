#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: a pointer to a pointer
 * @n: the value to be added at the end
 * Return: address of the element,
 * null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;/*set value of the new node*/
	new->next = NULL;/*we are adding to the tail*/
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
