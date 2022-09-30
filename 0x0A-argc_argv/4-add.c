#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argv: an array of size argc
 * @argc: a size of an array argv
 *
 * Return: 1 if one of the numbers contain non digit symbols, otherwise 0
 */
int main(int argc, char *argv[])
{
	int n, d, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
