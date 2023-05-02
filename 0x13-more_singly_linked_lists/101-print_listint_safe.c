#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the listint_t list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	if (head == NULL)
	{
		exit(98);
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;
		/*
		 * because of how memory is allocated, the next node
		 * will have a lower value address than the current one
		 * so if the next node is lower than the current one
		 * it means we are in the loop.
		 * but once the mem of next node is greater than the current one,
		 * we've reached the end of the list
		 */
		if (head->next >= head)
		{
			/* print the start of the loop */
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (nodes);
}
