#include "holberton.h"
/**
*leet - A function that encodes a string into 1337.
*
*@str: Pointer to the array.
*
*Return: string pointer.
*/
char *leet(char *v)
{
	int a = 0, b;
	char c1[] = {'a', 'e', 'o', 't', 'l'};
	char c2[] = {'4', '3', '0', '7', '1'};

	while (v[a] != '\0')
	{
		for (b = 0; c1[b] != '\0'; b++)
		{
			if (v[a] == c1[b] || v[a] == c1[b] - 32)
			{
				v[a] = c2[b];
			}
		}
		a++;
	}
	return (v);
}
