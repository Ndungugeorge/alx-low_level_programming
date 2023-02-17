#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and the alphabet in lowercase, and then in uppercase
 *Return: Always 0 (Success) else fail
 */
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10); /* this is an ascii code for new line*/

return (0);
}
