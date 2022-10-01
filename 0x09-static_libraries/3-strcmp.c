#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: a pointer string to be compared with
 * @s2: a pointer string to be compared with
 *
 * Return: if string 1 is greater than string 2
 *         if string 1 is compared with string 2
 *         if string 1 is lesser than string 2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
