#include "lists.h"
#include <stdio.h>

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint_len - counts the number of individual nodes
 *                    in a looped listint_t linked list
 * @head: a pointer to the beginning of the list
 *
 * Return: 0 if the list is not looped else,
 *         the number of individual nodes in the list
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *var_one, *var_two;
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
 * print_listint_safe - prints a listint_t linked list
 * @head: the pointer to the beginning of the listint_t list
 *
 * Return: the number of nodes in the list else if the function fails
 *         exit program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
