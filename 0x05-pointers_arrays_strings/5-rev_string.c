#include "holberton.h"
#include <stdio.h>
/**
*rev_string -  function that prints a string, in reverse,
*followed by a new line.
*
*@s : pointer to a string.
* Return: string lenght.
*/
void rev_string(char *s)
{
	int len = _strlen(s), i;
	char *rev = s;
	char tmp;

	while (*(rev++) != '\0')
		continue;
	rev = rev - 2;
	for (i = 0; i < len / 2; ++i)
	{
		tmp = s[i];
		s[i] = rev[0];
		rev[0] = tmp;
		rev--;
	}
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
