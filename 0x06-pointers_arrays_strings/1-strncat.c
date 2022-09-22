#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: number of bytes fromn src to dest
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a] && a < n; a++)
		dest[dest_len++] = src[a];

	return (dest);
}



