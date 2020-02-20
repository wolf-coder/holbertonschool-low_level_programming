#include "holberton.h"
/**
*_strcat -  This function appends the src string to the dest string,
*overwriting the terminating null byte (\0) at the end of dest, and then adds a
*terminating null byte.
*
*@dest: Pointer to the array.
*@src: Pointer to the array.
*Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int lenDest = _strlen(dest), lenSrc = _strlen(src);
	int i;

	for (i = 0 ; i < lenSrc ; ++i)
	{
		dest[lenDest + i] = src[i];
	}
	return (dest);
}
/**
* _strlen - function that that returns the length of a string.
* @s : pointer to a string.
* Return: string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

