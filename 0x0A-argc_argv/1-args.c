#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: a size of argv array
 * @argv: the array of size argc
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
