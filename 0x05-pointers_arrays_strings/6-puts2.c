#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string, starting
 *with the first character, followed by a new line.
 * @str:  Pointer of a char type.
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	if (str[0] != '\0')
	{
		do {
			_putchar(str[i]);
			i = i + 2;
		} while ((str[i - 1] != '\0') && (str[i] != '\0'));
	}
	_putchar('\n');
}
