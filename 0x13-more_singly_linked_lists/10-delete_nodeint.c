#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the listint_t list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Handle case where head node is deleted */
	if (index == 0)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	/* Traverse list to find node to delete */
	current = (*head)->next;
	prev = *head;
	while (current && i < (index - 1))
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	temp = current;
	prev->next = current->next;
	free(temp);
	return (1);
}
