#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the begining of a list
 * @head: a pointer to the begining of the list
 * @str: the string to be added to list_t list
 *
 * Return: the address of the new element
 *         or NULL if function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
