#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the listint_t list
 * Return: the number of nodes in the listint_t list
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}

	while (h)
	{

		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
