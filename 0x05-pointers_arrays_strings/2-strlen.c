#include "holberton.h"
/**
*_strlen - function that that returns the length of a string.
*
*@s: pointer of char type.
*Return: - The length of a string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
