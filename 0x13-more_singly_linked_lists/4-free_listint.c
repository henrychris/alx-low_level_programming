#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the listint_t list
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *curr_node;

	while (head != NULL)
	{
		/* track the current */
		curr_node = head;
		/* shift to the next node */
		head = head->next;
		/* free current before moving on*/
		free(curr_node);
	}
}
