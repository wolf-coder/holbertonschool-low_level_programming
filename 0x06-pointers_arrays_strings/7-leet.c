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
	char c1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char c2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; i < len; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (str[i] == c1[j] 	)
			{
				str[i] = c2[j];
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
