#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int length = 0, n;

	while (s[n++])
		length++;

	for (n = length - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
