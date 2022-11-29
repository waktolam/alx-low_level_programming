#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to locate
 *
 * Return: null if the node does not exist
 *         Otherwise - the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
