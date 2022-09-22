#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: a pointer to the string to be concatenated upon
 * @src: a source string to be appended to @dest
 *
 * Return: a pointer to the destinstion string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a]; a++)
		dest[dest_len++] = src[a];

	return (dest);
}
