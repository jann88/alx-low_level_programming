#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to a pointer listint_t first node
 * use one loop
 * do NOT use malloc and free or arrays
 * declare only two variables
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
	       current = current->next;
	       current->next = prev;
	       prev = current;
	       current = current;
	}
	*head = prev;
	return (*head);
}
