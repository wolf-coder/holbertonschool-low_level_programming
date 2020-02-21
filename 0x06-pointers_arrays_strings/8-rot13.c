#include "holberton.h"
/**
 *rot13- Function that encodes a string using rot13.
 *@str: pointer
 *Return: return str-> pointer to an array.
 */
char *rot13(char *str)
{
	char C1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int y, w, x;

	for (y = 0; str[y] != '\0'; y++)
	{
		x = 0;
		for (w = 0; C1[w] != '\0'; w++)
		{
			if (str[y] == C1[w] && x == 0)
			{
				x = w;
				str[y] = n[x];
				x = 1;
			}
		}
	}
	return (str);
}
