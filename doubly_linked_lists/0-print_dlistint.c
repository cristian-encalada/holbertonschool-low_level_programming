#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to dlistint_t list.
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		printf("%i\n", h->n);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
