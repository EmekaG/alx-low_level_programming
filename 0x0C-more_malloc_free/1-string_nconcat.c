#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @n: the maximium number of byte used in the concatenation
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL if function fails
 *         else a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int b = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		b++;

	str = malloc(sizeof(char) * (b + 1));

	if (str == NULL)
		return (NULL);

	n = 0;

	for (i = 0; s1[i]; i++)
		str[b++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[b++] = s2[i];

	str[b] = '\0';

	return (str);
}
