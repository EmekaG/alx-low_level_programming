#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds integers
 * @a: first integer to be added
 * @b: second integer to be added
 *
 * Return: the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract integers
 * @a: first integer to be substracted
 * @b: second integer to be substracted
 *
 * Return: result of substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first integer to be multiplied
 * @b: second integer to be multiplied
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide both integers
 * @a: first integer to be divided
 * @b: second integer to be divided
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder from dividing both integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
