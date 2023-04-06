#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @index: index of the node, starting from 0
 * @head: pointer to dlistint_t list.
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head == NULL) /* last node exceeded */
			return (NULL);
		head = head->next;
	}
	return (head);
}
