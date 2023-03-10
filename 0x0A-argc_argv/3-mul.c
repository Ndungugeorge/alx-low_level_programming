#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers.`
 * @argc: argc param
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);
	return (0);
}
