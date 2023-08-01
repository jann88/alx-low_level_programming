#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: a pointer to a pointer listint_t first node
 * Return: 0 Always.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
