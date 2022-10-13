#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @seperator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(str);
}
