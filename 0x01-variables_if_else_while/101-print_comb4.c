#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return:return 0 (Success)
 */
int main(void)
{
int n, i, j;

for (n = 48; n < 58; n++)
{
for (i = 49; i < 58; i++)
{
for (j = 50; j < 58; j++)
{
if (j > i && i > n)
{
putchar(n);
putchar(i);
putchar(j);
if (n != 55 || i != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
