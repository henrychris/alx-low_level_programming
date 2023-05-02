#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 * @head: pointer to the listint_t list
 * @idx: index of the list where the new node should be added
 * @n: integer to be added to the listint_t list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = listint_len(*head);

	if (head == NULL || idx > i)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (idx > 1 && temp != NULL)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL)
		return (NULL);

	/* Create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Insert new node into list */
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
