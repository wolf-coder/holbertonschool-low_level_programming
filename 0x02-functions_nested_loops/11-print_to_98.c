#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - A function that prints all natural numbers from n
 *to 98, followed by a new line.
 *
 *@n: Delimater number
 *Return: void
 **/
void print_to_98(int n)
{
int i = 0;
printf("%d", n);
if (n <= 98)
{
for (i = n + 1; i <= 98; ++i)
{
printf(", %d", i);
}
}
else
{
for (i = n - 1; i >= 98; --i)
{
printf(", %d", i);
}
}
printf("\n");
}
