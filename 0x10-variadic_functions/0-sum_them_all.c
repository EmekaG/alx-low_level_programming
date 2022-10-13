#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of the parameters passed as arguments
 * @...: ellipsis that indicates other parameters to be added
 *
 * Return: 0 if n == 0 else return the the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i, sum;

	va_start(par, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}
