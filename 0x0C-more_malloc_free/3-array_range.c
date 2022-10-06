#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: the minimum number of values contained by the array created
 * @max: the maximum of @min
 *
 * Return: NULL if malloc function fails or
 *         @min is greater than @max else,
 *         pointer to the newly created array
 */
int *array_range(int min, int max)
{
	/*where arr is the array created, s is the size of value type*/
	int *arr, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	arr = malloc(sizeof(int) * s);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		*(arr + i) = min++;

	return (arr);

}
