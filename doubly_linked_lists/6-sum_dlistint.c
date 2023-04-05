#include "lists.h"
/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to dlistint_t list.
 * Return:  the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
