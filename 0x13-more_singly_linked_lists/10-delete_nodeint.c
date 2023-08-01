#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node witha specific index
 * @head: pointer to a pointer listint_t first node
 * @index: node index to be deleted
 * Return: 1 if successfull and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}
