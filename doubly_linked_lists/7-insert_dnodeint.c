#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: index of the list where the new node should be added.
 * @h: pointer to dlistint_t list.
 * @n: integer input.
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;

	/* Inserts the new node at the beginning of the list */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Verify if the index is valid */
	for (; idx > 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	/* Inserts the new node at the end of the list */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	/* Adding the new node at the index specified */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	/* updating existing nodes */
	temp->next = new;
	temp->next->prev = new;
	return (new);
}
