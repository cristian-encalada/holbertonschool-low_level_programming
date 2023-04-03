#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to list_t
 * @str: input string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	/* Adding the new node at the end of the list */
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	return (end);
}
