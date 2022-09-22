#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: a pointer to the string to be concatenated upon
 * @src: a source string to be appended to @dest
 *
 * Return: a pointer to the destinstion string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_lenght = 0;

	while (dest[index++])
		dest_lenght++;

	for (index = 0; src[index]; index++)
		dest[dest_lenght++] = src[index];

	return (dest);


