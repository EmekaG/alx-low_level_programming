#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: number to find the factorial
 *
 * Return: if n > 0 - the factorial of n.
 *         if n < 0 - 1 to indicate error         
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	res = res * factorial(n - 1);

	return (res);
}
