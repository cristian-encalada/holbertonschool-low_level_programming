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
	unsigned int i;
	dlistint_t *new, *temp, *verify;

	if (h == NULL || *h == NULL) /* Check for NULL pointers */
		return (NULL);
	/* Verify if the index is valid */
	verify = *h;
	for (i = 0; i < idx && verify != NULL; i++)
	{
		verify = verify->next;
	}
	if (i < idx) /*	index > number of nodes */
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	/* if the list is empty, add new node as the first node */
	if (*h == NULL)
	{
		*h = new;
		new->prev = NULL;
		return (*h);
	}
	/* Adding the new node at the index specified */
	temp = *h;
	while (temp->next != verify)
	{
		temp = temp->next;
	}
	new->prev = temp;
	new->next = verify;
	temp->next = new;
	verify->prev = new;

	return (new);
}
