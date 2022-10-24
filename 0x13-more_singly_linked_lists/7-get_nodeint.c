#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linekd list
 * @head: a pointer to the begining of the list
 * @index: the index of the node to be returned of type int
 *
 * Return: NULL if node does not exist else, return the nth node
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
