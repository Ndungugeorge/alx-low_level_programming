#include "main.h"

/**
 * print_binary - func Prints the binary rep of a number.
 * @n: binarynumber.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
