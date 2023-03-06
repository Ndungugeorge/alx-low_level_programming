#include "main.h"

/**
 * _strspn - get the length of a string
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in the init segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, b, t = 0;

	while (accept[i])
	{

		b = 0;

		while (s[b] != 32)
		{
			if (accept[i] == s[b])
			{
				t++;

			}

			b++;

		}

		i++;

	}

	return (t);

}
