#include "holberton.h"
/**
*_strchr -  This function that that locates a character in a string.
*overwriting the terminating null byte (\0) at the end of dest, and then adds a
*terminating null byte.
*
*@s: Pointer to the array.
*@c: A char byte to look for.
*Return: Returns a pointer to the first occurrence of the character c in the
*string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	if (*p == '\0')
	{
		p = 0;
	}
	return (0);
}
