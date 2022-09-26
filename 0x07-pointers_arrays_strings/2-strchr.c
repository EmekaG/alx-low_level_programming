#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the string to be located
 *
 * Return: a pointer to the first occurence of character c
 *         or NULL if character c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}

