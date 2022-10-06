#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates a memory for an array using malloc
 * @nmemb: the number of element memory is being allocated for
 * @size: number of bytes contained by each elements
 *
 * Return: NULL if @nmemb or @size is 0 or if malloc fails
 *         else, return a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*where m is the memory; calloc_mem is the memory allocated */
	void *m;
	char *calloc_mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	calloc_mem = m;

	for (i = 0; i < (size * nmemb); i++)
		*(calloc_mem + i) = '\0';

	return (m);
}


