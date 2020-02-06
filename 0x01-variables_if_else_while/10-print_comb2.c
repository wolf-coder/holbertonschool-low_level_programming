#include <stdio.h>
/**
 *main- a program that prints all possible
 *combinations of single-digit numbers.
 * Return: 0
 **/
int main(void)
{
int i = 48, j = 48;

while (i != 58 && j != 58)
{
while (j <= 57)
{
putchar(i);
putchar(j);
if (!(i == 57 && j == 57))
{
putchar(',');
putchar(' ');
}
j++;
}
j = 48;
i++;
}
putchar('\n');
return (0);
}
