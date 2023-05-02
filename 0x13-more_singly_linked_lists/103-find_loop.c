#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the listint_t list
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (head->next >= head)
		{
			break;
		}
		head = head->next;
	}
	return (head);
}
