#include "lists.h"

/**
  * add_node_end - adds a new node at the end of the list_t list
  * @head: linked list
  * @str: string
  * Return: The elements linked
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *endnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		endnode = *head;
		while (endnode->next != NULL)
			endnode = endnode->next;
		endnode->next = newnode;
	}

	if (str == NULL)
	{
		newnode->str = 0;
		newnode->len = 0;
	}
	else
	{
		newnode->str = strdup(str);
		if (newnode->str == 0)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = strlen(str);
	}
	newnode->next = NULL;
	return (newnode);
}
