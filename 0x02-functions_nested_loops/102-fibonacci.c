#include <stdio.h>

/**
 * main - print first 50 fibonacci number from 1 and 2
 * Return: 0 (success)
 */
int main(void)
{
	/* starting numbers */
	long int x = 1;
	long int y = 2;

	/* counts how many numbers have been computed*/
	int k = 2;

	/* temporary variable to hold x */
	long int tmp;

	printf("%li, %li, ", x, y);

	while (k < 50)
	{
		printf("%li", x + y);

		if (k == 49)
			break;

		printf(", ");
		tmp = x;
		x = y;
		y = x + tmp;

		k++;
	}
	putchar('\n');

	return (0);
}
