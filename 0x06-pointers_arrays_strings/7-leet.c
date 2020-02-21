#include "holberton.h"
/**
*leet - A function that encodes a string into 1337.
*
*@str: Pointer to the array.
*
*Return: string pointer.
*/
char *leet(char *str)
{
	int len = _strlen(str), i, j;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; c1[j] != '\0'; ++j)
		{
			if (str[i] == c1[j])
			{
				str[i] = c2[j / 2];
			}
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
