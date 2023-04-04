#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a dlistint_t list
 * @head: *pointer to list_t
 * @n: input integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
