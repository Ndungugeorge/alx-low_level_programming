#include "main.h"

/**
 * binary_to_uint - func converts a binary number to an
 * unsigned int.
 * @b: pointer to a string.
 *
 * Return: converted num or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int l, base2;

	if (!b)
		return (0);

	uint = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, base2 = 1; l >= 0; l--, base2 *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			uint += base2;
		}
	}

	return (uint);
}
