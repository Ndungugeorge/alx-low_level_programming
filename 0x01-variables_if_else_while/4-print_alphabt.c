#include <stdio.h>

/**
 *main ->  program that prints the alphabet in lowercase, followed by a new line.
 *Print all the letters except q and e
 *Return: Always 0 (Success) else fail
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}

putchar(10); /* this is an ascii code for new line*/

return (0);
}
