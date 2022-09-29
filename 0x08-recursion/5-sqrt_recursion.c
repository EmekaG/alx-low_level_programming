#include "main.h"

int square_root(int num, int root);
int _sqrt_recursion(int n);

/**
 * square_root - finds the natural square root of a number
 * @num: the number to find it's square root
 * @root: the root of the number
 *
 * Return: square root if number has a matural square root
 *         otherwise -1.
 */
int square_root(int num, int root)
{
	if (num == (root * root))
		return (root);

	else if (num / 2 == root)
		return (-1);

	return (square_root(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: The number to return it's squareroot
 *
 * Return: the natural square root of n if it has otherwise -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	else if (n > 0 && n <= 1)
		return (1);

	return (square_root(n, root));
}
