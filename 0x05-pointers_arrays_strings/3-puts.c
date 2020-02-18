#include "holberton.h"
/**
*_puts -  function that prints a string, followed by a new line, to stdout.
**@str : int
* Return : Void.
*/
void _puts(char *str)
{
	int i = -1;

	while (str[++i] != '\0')
		_putchar(str[i]);
	_putchar('\n');
}
