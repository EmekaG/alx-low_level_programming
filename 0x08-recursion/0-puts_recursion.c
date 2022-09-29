#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s);
		s = s + 1;
	}

	_putchar('\n');
}
