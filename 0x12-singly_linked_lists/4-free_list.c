#include "lists.h"
/**
 * free_list - frees space for list_t function
 * @head: pointer to the first node in a list
 * Return: Always 0;
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head == NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
