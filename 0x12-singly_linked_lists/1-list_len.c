#include "lists.h"

/**
 * list_len - returns the number of elements in a linked lists
 * @h: the list_t list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
