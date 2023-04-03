#include "lists.h"
/**
 * list_len - counts all the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of elements (nodes)
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
