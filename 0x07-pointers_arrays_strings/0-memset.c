
#include "main.h"

/**
 * * _memset -> this is memory set function
 * * @s: string
 * * @b: character
 * * @n: integer
 * * Return: a string
 **/
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
