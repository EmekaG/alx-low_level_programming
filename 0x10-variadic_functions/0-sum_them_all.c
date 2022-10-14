#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of parameters passed as arguments to the function
 * @...: ellipsis that indicates the variable number of parameters
 *       to be summed up.
 *
 * Return: 0 if n == 0, else the work of the main function
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	
	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
