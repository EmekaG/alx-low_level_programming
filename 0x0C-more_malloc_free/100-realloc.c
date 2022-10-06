#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc call
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: NULL if new_size == 0 and ptr is not NULL or
 *         ptr if new_size == old_size else,
 *         a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *dup, *realloc_mem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dup = ptr;
	m = malloc(sizeof(*dup) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	realloc_mem = m;

	for (i = 0; i < old_size && i < new_size; i++)
		*(realloc_mem + i) = *dup++;

	free(ptr);
	return (m);
}
