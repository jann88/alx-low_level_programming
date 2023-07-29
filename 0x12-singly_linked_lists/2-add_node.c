#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the begining of list_t
 * @head: pointer to a pointer first node of list_t list
 * @str: pointer to a string
 * Return: address of a new element or NULL if nothing is passed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return  (NULL);
	}
	if (str)
	{
		newNode->str = strdup(str);
		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	else
	{
		newNode->str = NULL;
	}
	newNode->len = (str != NULL) ? strlen(str) : 0;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
