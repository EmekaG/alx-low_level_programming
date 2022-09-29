#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if number is divisible
 * @num: the number to be checked
 * @div: the divisor
 *
 * Return: 0 if divisible
 *         otherwise 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	else if (num / 2 == div)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 0 if integer is not prime otherwise 1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	else if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
