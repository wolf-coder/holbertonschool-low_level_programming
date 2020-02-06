#include <stdio.h>
/**
 * main- A program that prints the
 * alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: 0
 **/
int main(void)
{
char Ch;
for (Ch = 'a'; Ch <= 'z'; Ch++)
{
putchar(Ch);
}
for (Ch = 'A'; Ch <= 'Z'; Ch++)
{
putchar(Ch);
}
putchar('\n');
return (0);
}
