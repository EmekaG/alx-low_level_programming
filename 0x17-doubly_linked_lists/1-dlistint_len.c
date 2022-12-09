#include "lists.h"

/**
 * dlistint_len - calculates the number of elements in list
 * @h: the head of the list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
