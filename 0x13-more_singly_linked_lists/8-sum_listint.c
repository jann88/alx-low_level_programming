#include "lists.h"
/**
 * sum_listint - returns sum of the data in a linked list
 * @head: pointer to the first node
 * Return: total list or 0 if empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
