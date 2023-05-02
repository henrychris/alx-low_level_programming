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

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}
	temp = get_nodeint_at_index(*head, idx - 1);
	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(temp);
		return (NULL);
	}

	/* Link new node to the next node */
	new_node->n = n;
	new_node->next = temp->next;
	/* Link prev node to new_node */
	temp->next = new_node;

	return (new_node);
}
