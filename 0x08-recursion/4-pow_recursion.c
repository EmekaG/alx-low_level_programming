#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: the number to be raised
 * @y: the power
 *
 * Return: the value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);

	else if (y >= 0 && y <= 1)
		return (1);

	res = res * _pow_recursion(x, y - 1);

	return (res);
}
