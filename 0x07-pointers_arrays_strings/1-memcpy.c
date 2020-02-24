#include "holberton.h"
#include <stdio.h>

/**
*_memcpy -  This function that copies memory area.
*overwriting the terminating null byte (\0) at the end of dest, and then adds a
*terminating null byte.
*
*@dest: Pointer to the destination array.
*@src:  Pointer to the source array.
*@n: Number of byte to be filled.
*Return: Pointer to the resulting string dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
