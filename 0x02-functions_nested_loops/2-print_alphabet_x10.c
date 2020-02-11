#include "holberton.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 *in lowercase, followed by a new line
 *
 * Return: Void
 **/
void print_alphabet_x10(void)
{
int i = 0, k = 0;
for (k = 0; k < 10; ++k)
{
for (i = 97; i <= 122; ++i)
{
_putchar(i);
}
_putchar('\n');
}
}
