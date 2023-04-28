#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr_node;

	while (head != NULL)
	{
		/* track the current */
		curr_node = head;
		/* shift to the next node */
		head = head->next;
		/* free current before moving on*/
		free(curr_node->str);
		free(curr_node);
	}

	/* set head to null when list is empty */
	head = (NULL);
}
