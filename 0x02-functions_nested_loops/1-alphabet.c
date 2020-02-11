#include "holberton.h"
/**
 * print_alphabet - A function that prints the alphabet,
 *in lowercase, followed by a new line.
 *
 * Return: Void
 **/
void print_alphabet(void)
{
int i = 0;
for (i = 97; i <= 122; ++i)
{
	_putchar(i);
}
_putchar('\n');
}
