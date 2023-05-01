#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: pointer to the listint_t list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp_node;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp_node = *head;
	*head = (*head)->next;
	/*always free the memory */
	free(temp_node);

	return (data);
}
