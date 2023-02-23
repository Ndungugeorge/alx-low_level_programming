#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

