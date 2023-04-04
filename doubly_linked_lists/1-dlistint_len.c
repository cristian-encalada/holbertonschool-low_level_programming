#include "lists.h"
/**
 * dlistint_len - counts all the elements of a dlistint_t list.
 * @h: pointer to dlistint_t list.
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
