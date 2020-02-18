#include "holberton.h"
/**
*_strcpy - function that copies the string pointed to by src, including the
*terminating null byte (\0), to the buffer pointed to by dest
* @dest:  Pointer of a char type.
* @src:  Pointer of a char type.
* Return:  Pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int i;

	for (i = 0; i < len; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
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
