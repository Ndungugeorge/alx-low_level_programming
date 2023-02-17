#include <stdio.h>

/**
 *main -> program that prints the lowercase alphabet in reverse
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success) else fail
 */
int main(void)
{
char i;

for (i = 'z'; i >= 'a'; i--)
{

putchar(i);
}

putchar(10); /* this is an ascii code for new line*/

return (0);
}
