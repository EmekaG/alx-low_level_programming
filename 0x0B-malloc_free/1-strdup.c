#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly-allocated space in memory
 * @str: the string to be duplicated
 *
 * Return: NULL if str = NULL or insufficient memory available
 *         otherwise return a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
