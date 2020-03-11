#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc.
 *
 *@nmemb: Elements size.
 *@size: Size of one single element.
 *
 *Return: NULL if malloc fails,or 'str': a pointer to the address of
 *the allocated heap space.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *Array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Array = malloc(nmemb * size);
	if (Array == NULL)
		return (NULL);
	return (Array);
}
