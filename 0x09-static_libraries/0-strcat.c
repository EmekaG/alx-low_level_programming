#include "main.h"

/**
 * *_strcat - concatenates the string pointed to by @src
 * @dest: A pointer to the string
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
