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
	int i, j;
	char c1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char c2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = c1[j] != '\0'; ++j)
		{
			if (str[i] == c1[j])
			{
				str[i] = c2[j];
			}
		}
	}
	return (str);
}
