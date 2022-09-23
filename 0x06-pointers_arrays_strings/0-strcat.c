#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src
 * @dest: A pointer to the string
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
