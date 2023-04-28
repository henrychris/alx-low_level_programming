#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the listint_t list
 * @n: integer to be added to the listint_t list
 * Return: address of the new element or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	int new_int;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new_int = n;
	new->n = new_int;
	new->next = *head;
	/* sets a new start for the list */
	*head = new;
	return (new);
}
