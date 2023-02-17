#include <stdio.h>

/**
 *main -> program that prints all single digit numbers of base 10
 *starting from zero
 *Return: Always 0 (Success) else fail
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{

putchar(i);
}

putchar(10); /* this is an ascii code for new line*/

return (0);
}

