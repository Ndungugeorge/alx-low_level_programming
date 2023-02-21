#include "main.h"

/**
 * _isalpha - function checking for alphabetical character
 * @c: a charter to be checked on
 * Return: returns 1 else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
