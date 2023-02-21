#include "main.h"

/**
 * print_last_digit -> function prints the last digit of a number
 * @n: parameter set
 * Return: the last digit
*/
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;

	x = n % 10;

	if (i < 0)
		i = -x;

	_putchar (i + '0');

	return (i);
}
