#include "main.h"

/**
 * flip_bits - func return no of bits you need to flip
 *from a given number to another.
 * @n: int num.
 * @m: The number of flips.
 *
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, nobits = 0;

	while (xor > 0)
	{
		nobits += (xor & 1);
		xor >>= 1;
	}

	return (nobits);
}
