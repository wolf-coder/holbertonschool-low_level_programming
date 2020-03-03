#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *@str : array.
 * Return: pointer to a new string , NULL if str = NULL , on success eturns a
 * pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while(str[len] != '\0' )
		len++;
	len++;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i <= len ; i++)
		p[i] = str[i];
	return (p);
}
