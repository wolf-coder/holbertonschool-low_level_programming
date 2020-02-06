#include <stdio.h>
/**
 *main- a program that prints all possible
 *combinations of single-digit numbers.
 * Return: 0
 **/
int main(void)
{
int i;
for (i = 48; i <= 57; ++i)
{
putchar(i);
if (i <= 56)
{
	putchar(',');
	putchar(' ');
} else
{
putchar('\n');
}
}
return (0);
}
