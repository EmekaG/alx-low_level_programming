#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on sucess 1.
 * on erroe, -1 is returned, and errno is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
