#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: result of concarenation on success , NULL on Failure.
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i = 0;
	char *p = NULL;

	if (s1 == NULL)
		l1 = 0;
	else
	{
		while (s1[l1] != '\0')
			l1++;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		while (s2[l2] != '\0')
			l2++;
	}
	p = malloc((l1 + l2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < l1 ; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0 ; i < l2 ; i++)
	{
		p[i + l1] = s2[i];
	}
	p[l1 + l2] = '\0';
	return (p);
}
