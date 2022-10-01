#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: the string to get the length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
