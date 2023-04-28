#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list_t list
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *new;
	list_t *last = *head;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = new_str;
	new->len = strlen(new_str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
