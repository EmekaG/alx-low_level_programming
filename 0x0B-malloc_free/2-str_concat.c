#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: NULL if function fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, str_i = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	str = malloc(sizeof(char) * length);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		*(str + str_i++) = *(s1 + i);

	for (i = 0; s2[i]; i++)
		*(str + str_i++) = *(s2 + i);

	return (str);

}
