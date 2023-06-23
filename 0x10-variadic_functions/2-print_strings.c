#include "variadic_functions.h"


/**
 * print_strings - prints stringsfollowed by new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *str;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(lst, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator !=NULL && i != (n - 1))
				printf("%s", separator);
	}

	va_end(lst)
	printf("\n");
}
