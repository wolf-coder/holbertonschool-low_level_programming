#include "holberton.h"
/**
*_memset -  This function that fills memory with a constant byte.
*overwriting the terminating null byte (\0) at the end of dest, and then adds a
*terminating null byte.
*
*@s: Pointer to the array.
*@b: A char byte to be fill with.
*@n: Number of byte to be filled.
*Return: Pointer to the resulting string dest.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
