#include "lists.h"
/**
 * free_dlistint - frees a list_t list.
 * @head: pointer to dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /* will store the next node */

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
