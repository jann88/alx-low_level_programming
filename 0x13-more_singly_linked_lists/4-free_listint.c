#include "lists.h"
/**
 * free_listint - free up memory
 * @head: pointer to the first node of the list
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
