#include "holberton.h"
#include <stdio.h>
/**
*_strspn - A function that gets the length of a prefix substring.
*
*@s: Pointer to the array.
*@accept: A ponter to a match string.
*
*Return: Returns the number of bytes in the initial segment of s which
*consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int  i = 0, j, count = 0, tmp = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		tmp = count;
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
		if (count == tmp)
		{
			return (count);
		}
	}
	return (count);
}
