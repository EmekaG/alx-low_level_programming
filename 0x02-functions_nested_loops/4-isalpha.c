#include "main.h"

/**
 * _isalpha - Check for an alphabetical character.
 * @c: The character to be checked.
 *
 * Return: 1 if if the letter is lowercase or uppercase. otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
