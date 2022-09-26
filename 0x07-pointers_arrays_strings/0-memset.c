#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @n: number of bytes in the memory to be filled
 * @b: constant byte to be filled in the memory
 * @s: pointer to the memory to be filled with constant byte
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
