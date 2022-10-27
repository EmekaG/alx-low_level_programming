#include "main.h"

/**
 * flip_bits -  returns the number of bits to be flipped to traverse between numbers
 * @n: the number
 * @m: the number traversed from n
 *
 * Return: the number of bits being flipped to traverse from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
