#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
