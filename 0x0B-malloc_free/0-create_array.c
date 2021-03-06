#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 *@size : size of the array.
 *@c: character to fill with.
 * Return: a pointer to the array.
 */


char *create_array(unsigned int size,     char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(c));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
