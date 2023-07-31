#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees all allocated memmory
 * @head: pointer to a pointer list node head
 * Return: 0 Always.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

	}

}
