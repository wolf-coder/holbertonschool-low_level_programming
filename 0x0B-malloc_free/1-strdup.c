#include "holberton.h"
#include <stdlib.h>

/**
*_strlen - function that that returns the length of a string.
*
*@s: pointer of char type.
*Return: - The length of a string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *@str : array.
 * Return: pointer to a new string , NULL if str = NULL , on success eturns a
 * pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0, len = _strlen(str);
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i <= len ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
