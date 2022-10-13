#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list par;
	unsigned int i;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(par, int));

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(par);
}
