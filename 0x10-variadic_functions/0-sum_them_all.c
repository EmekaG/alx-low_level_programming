#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of parameters passed as arguments to the function
 *
 * Return: 0 if n == 0, else return result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int result = 0;
	
	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}

	va_end(ap);
	return (result);
}
