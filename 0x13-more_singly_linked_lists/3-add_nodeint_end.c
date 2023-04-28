#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list
 * @head: pointer to the listint_t list
 * @n: integer to be added to the listint_t list
 * Return: address of the new element or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int new_int;
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new_int = n;

	new->n = new_int;
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
