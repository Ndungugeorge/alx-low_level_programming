#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print all possible combinations of single-digit numbers
 *Return: Always 0 (Success)else fail
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10); /* new line*/

return (0);
}
