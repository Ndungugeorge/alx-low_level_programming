#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, b = 0;

	while (haystack[i])
	{
		while (needle[b])
		{
			if (haystack[i + b] != needle[b])
			{
				break;
			}

			b++;

		}

		if (needle[b] == '\0')
		{
			return (haystack + i);
		}

		i++;

	}
	return ('\0');
}
