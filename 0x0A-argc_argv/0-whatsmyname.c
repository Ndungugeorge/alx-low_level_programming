#include<stdio.h>

/**
 * main - program to print its name
 * @argc: argument count
 * @argv: array of command.
 * Return: return 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
