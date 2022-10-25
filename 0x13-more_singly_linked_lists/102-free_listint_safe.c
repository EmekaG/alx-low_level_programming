#include "lists.h"

size_t loop_listint_len(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * loop_listint_len - counts the number of individual nodes
 *                    in a looped listint_t linked list
 * @head: a pointer to the beginning of the list
 *
 * Return: 0 if the list is not looped else,
 *         the number of individual nodes in the list
 */
size_t loop_listint_len(listint_t *head)
{
	listint_t *var_one, *var_two;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	var_one = head->next;
	var_two = (head->next)->next;

	while (var_two)
	{
		if (var_one == var_two)
		{
			var_one = head;
			while (var_one != var_two)
			{
				nodes++;
				var_one = var_one->next;
				var_two = var_two->next;
			}

			var_one = var_one->next;
			while (var_one != var_two)
			{
				nodes++;
				var_one = var_one->next;
			}

			return (nodes);
		}

		var_one = var_one->next;
		var_two = (var_two->next)->next;
	}

	return (0);
}
/**
 * free_listint_safe - frees a listint_t list
 * @head: the pointer to the beginning of the listint_t list
 * desc: the function sets hesd to NULL
 *
 * Return: the size of the list being freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = loop_listint_len(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
