#include "main.h"

/**
 * *_strcpy - copies the string src to dest
 * @dest: character
 * @src: character
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
