#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                with a specific character
 * @size: the size of array to be initialized
 * @c: the specific character
 *
 * Return: NULL if size = 0 or if function fails
 *         otherwise, returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
