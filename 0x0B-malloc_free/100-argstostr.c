#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of a program
 * @ac: the number of argument to be concatenated in the program
 * @av: an array of pointers to the arguments
 *
 * Return: NULL if function fails, if ac == 0 or av == NULL
 *         otherwise a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, i, byte;
	int size = ac;

	if (ac == 0 || av == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (byte = 0; av[a][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (byte = 0; av[a][byte]; byte++)
			str[i++] = av[a][byte];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
