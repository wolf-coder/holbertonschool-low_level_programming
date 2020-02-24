#include "holberton.h"
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
	unsigned int  i = 0;

	while (s[i] != '\0')
	{
		if (accept[0] == s[i])
		{
			return (++i);
		}
		i++;
	}
	return (0);
}
