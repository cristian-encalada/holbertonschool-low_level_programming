#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @index: index of the node, starting from 0
 * @head: pointer to dlistint_t list.
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != 0)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}
	if (count != index)
		return (NULL);
	return (head);
}
