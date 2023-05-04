#include "main.h"

/**
 * set_bit - func Sets the value of bit at to 1.
 * @n: bit pointer.
 * @index: The index from 0.
 *
 * Return: 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
