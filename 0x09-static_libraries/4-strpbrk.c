#include "holberton.h"
/**
*_strpbrk -  This function searches a string for any of a set of bytes.
*
*@s: Pointer to the array.
*@accept: A ponter to a match string.
*
*Return: Returns a pointer to the byte in s that matches one of the bytes
*in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0;

	while (s[0] != '\0')
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[0] == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
