#include "main.h"

/**
 * _puts - prints a string
 * @str: string input
 *
 * Return: string
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
