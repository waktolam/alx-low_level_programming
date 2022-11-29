#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: A pointer to the address of the
 *        head of a list.
 *
 * Return: 0 if the list is empty
 *         Otherwise - the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
