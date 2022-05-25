#include "lists.h"

/**
  * add_node - adds a new node at the beginning
  * of  list_t list
  * @head: head of the linked list
  * @str: string to store in the list.
  * Return: address of the head
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
	return (NULL);
	}
	if (str == NULL)
	{
		newnode->str = 0;
		newnode->len = 0;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		newnode->str = strdup(str);
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	return (NULL);
}

