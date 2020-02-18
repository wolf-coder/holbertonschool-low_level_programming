#include "holberton.h"
/**
*puts_half - function that prints half of a string, followed by a new line.
* @str:  Pointer of a char type.
* Return: Void.
*/
void puts_half(char *str)
{
	int length_of_the_string = _strlen(str), i;

	for (i = length_of_the_string / 2; i <= length_of_the_string - 1 ; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
* _strlen - function that that returns the length of a string.
* @s : pointer to a string.
* Return: string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
