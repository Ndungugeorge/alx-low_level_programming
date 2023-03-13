#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: stored char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
		return (NULL);

	k = malloc(sizeof(c) * size);

	if (k == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		k[i] = c;

	return (k);
}
