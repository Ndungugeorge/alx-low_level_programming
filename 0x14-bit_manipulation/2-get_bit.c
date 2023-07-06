#include "main.h"

/**
 * get_bit - func return value of a bit at a given index.
 * @n: number of bits.
 * @index: The index to get the value from 0
 *
 * Return: value of bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
