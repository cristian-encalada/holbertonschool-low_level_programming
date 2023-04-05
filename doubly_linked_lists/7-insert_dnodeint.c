#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @index: index of the node, starting from 0
 * @head: pointer to dlistint_t list.
 * Return: the nth node
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
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @h: pointer to dlistint_t list.
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *node;

	node = get_dnodeint_at_index(*h, idx);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	/* if the list is empty, add new node as the first node */
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	/* Adding the new node at the end of the list */
	temp = *h;
	while (temp->next != node)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = (new + 1)->prev;
	new->next = (new - 1)->next;
	(new + 1)->prev = temp;
	(new - 1)->next = temp;
/*	new->prev = temp; */

	return (new);
}
