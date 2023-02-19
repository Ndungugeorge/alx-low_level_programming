#include <stdio.h>

/**
 *main -> program that prints all possible different combinations
 *of the two numbers
 *Return: 0 (Success)
 */
int main(void)
{
int i;
int n;
for (i = 48; i <= 57; i++)
{
for (n = 49; n <= 57; n++)
{
if (n > i)
{
putchar(ch);
putchar(n);
if (i != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}

putchar(10); /* this is an ascii code for new line*/

return (0);
}
