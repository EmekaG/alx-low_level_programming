#include "main.h"

/**
 * _isupper - to check for uppercase character.
 * @c: character to be checked for.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
