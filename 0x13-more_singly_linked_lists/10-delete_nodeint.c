#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: a pointer to the brgining of the list
 * @index: the index of the node to be deleted. index starts from 0
 *
 * Return: 1 if success else -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *dup = *head;
	unsigned int node;

	if (dup == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (dup->next == NULL)
			return (-1);

		dup = dup->next;
	}

	tmp = dup->next;
	dup->next = tmp->next;
	free(tmp);
	return (1);
}
