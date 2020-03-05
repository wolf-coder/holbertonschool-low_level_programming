#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *@width: columns number.
 *@height: rows number.
 *Return: pointer to a 2D array.
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	int **T = NULL;
	int i = 0, j = 0;

	T = malloc(height * sizeof(int *));
	if (T == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		*(T + i) = malloc(sizeof(int*) * width);
		if (*(T + i) == NULL)
			return (NULL);
	}
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			*(*(T + i) + j) = 0;
	return (T);
}
