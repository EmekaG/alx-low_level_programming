/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array
 * @array: the array
 * @size: the size of array
 * @action: a pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
