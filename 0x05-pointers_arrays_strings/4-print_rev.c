#include "holberton.h"

/**
*print_rev -  function that prints a string, in reverse
*followed by a new line.
*@s : pointer to a string.
*Return: Void.
*/
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
	{
		_putchar(s[len]);
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
