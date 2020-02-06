#include <stdio.h>
/**
 *main- A program that prints the lowercase alphabet in reverse,
 *followed by a new line.
 * Return: 0
 **/
int main(void)
{
int i;
for (i = 48; i <= 57; ++i)
{
putchar(i);
}
for (i = 97; i < 103; ++i)
{
putchar(i);
}
putchar('\n');
return (0);
}
