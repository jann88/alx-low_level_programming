#include "lists.h"
/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to the pointer of the first node in the lis
 * @str: pointer to a string
 * Return: address of the new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode, *tail;

	endNode = (list_t *)malloc(sizeof(list_t));
	if (endNode == NULL)
	{
		return (NULL);
	}
	if (str)
	{
		endNode->str = strdup(str);
		if (endNode->str == NULL)
		{
			free(endNode);
			return (NULL);
		}
	}
	else
	{
		endNode->str = NULL;
	}
	endNode->len = (str != NULL) ? strlen(str) : 0;
	endNode->next = NULL;
	if (*head == NULL)
	{
		*head = endNode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = endNode;
	}
	return (endNode);
}
