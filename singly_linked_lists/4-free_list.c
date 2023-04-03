#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *temp; /* will store the next node */

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
