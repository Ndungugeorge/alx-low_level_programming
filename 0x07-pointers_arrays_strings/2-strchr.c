#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string
 * @c: character
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;

	}

	for (i = 0; i <= a; i++)
	{
		if (c == s[i])
		{

			s += i;
			return (s);

		}

	}

	return ('\0');

}
