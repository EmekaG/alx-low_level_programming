#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string input to reverse
 *
 * Return: string reverse
 */
void rev_string(char *s)
{
	int lenght = 0, index = 0;
	char rev;

	while (s[index++])
		lenght++;

	for (index = lenght - 1; index >= lenght / 2; index--)
	{
		rev = s[index];
		s[index] = s[lenght - index - 1];
		s[lenght - index - 1] = rev;
	}
}


