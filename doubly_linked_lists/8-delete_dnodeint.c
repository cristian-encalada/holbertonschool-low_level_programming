#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a new node at a given position.
 * @index: index of the list where the new node should be added.
 * @head: pointer to dlistint_t list.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	/* Delete a node at the beginning of the list */
	if (index == 0)
	{
		if (temp->next != NULL) /* Is there a next node? */
		{
			temp->next->prev = NULL;
			*head = (*head)->next;
			free(temp);
		}
		else
		{
			*head = NULL;
			free(temp);
		}
		return (1);
	}
	/* Verify if the index is valid */
	for (; index > 0; index--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	/* Delete a node at the end of the list */
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	/* Delete a node at the index specified */
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
