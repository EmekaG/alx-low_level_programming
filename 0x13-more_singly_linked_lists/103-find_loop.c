#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: a pointer to the beginning of the list
 *
 * Return: The address of the node where the loop starts
 *          or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *var_one, *var_two;

	if (head == NULL || head->next == NULL)
		return (NULL);

	var_one = head->next;
	var_two = (head->next)->next;

	while (var_two)
	{
		if (var_one == var_two)
		{
			var_one = head;

			while (var_one != var_two)
			{
				var_one = var_one->next;
				var_two = var_two->next;
			}

			return (var_one);
		}

		var_one = var_one->next;
		var_two = (var_two->next)->next;
	}

	return (NULL);
}
