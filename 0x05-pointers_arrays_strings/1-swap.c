#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 */
void swap_int(int *a, int b)
{
	int pass = *a;
	*a = *b;
	*b = pass;
}
