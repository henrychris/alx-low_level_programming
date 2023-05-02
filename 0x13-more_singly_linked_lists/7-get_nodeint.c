#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list
 * @head: pointer to the listint_t list
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int curr_index = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	while (curr_index != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		curr_index++;
	}
	return (head);
}
