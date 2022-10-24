#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a linked list listint_t
 * @head: a pointer to the begining of the listint_t list
 *
 * Return: 0 if the list is empty else, the function of the main function
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
