#include "holberton.h"
/**
*string_toupper - a function that changes all lowercase
*letters of a string to uppercase.
*
*@str: Pointer to the array.
*
*Return: int.
*/
char *string_toupper(char *str)
{
	int i = 0, len = _strlen(str);

	for (i = 0; i < len; ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
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
