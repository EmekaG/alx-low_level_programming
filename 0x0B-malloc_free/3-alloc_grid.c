#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: the width of the 2 dimensional array
 * @height: the height of the 2 dimensional array
 *
 * Return: NULL if function fails or if width or height is 0 or negative
 *         else, a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int hgt_i;
	int wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		arr[hgt_i] = malloc(sizeof(int) * width);

		if (arr[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(*(arr + hgt_i));

			free(arr);
			return (NULL);

		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			arr[hgt_i][wid_i] = 0;
	}

	return (arr);

}
