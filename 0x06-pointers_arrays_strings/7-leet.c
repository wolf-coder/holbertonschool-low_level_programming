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
	int a = 0, b;
	char c1[] = {'a', 'e', 'o', 't', 'l'};
	char c2[] = {'4', '3', '0', '7', '1'};

	while (str[a] != '\0')
	{
		for (b = 0; c1[b] != '\0'; b++)
		{
			if (str[a] == c1[b] || str[a] == c1[b] - 32)
			{
				str[a] = c2[b];
			}
		}
		a++;
	}
	return (str);
}
