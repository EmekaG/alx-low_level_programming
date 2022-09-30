#include <stdio.h>

/**
 * main - a program that prints all the arguments it receives
 * @argv: the array of size argc
 * @argc: the size of array argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}

