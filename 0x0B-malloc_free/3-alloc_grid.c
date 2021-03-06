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
	int **T = NULL;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	T = malloc(height * sizeof(int *));
	if (T == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		*(T + i) = malloc(sizeof(int) * width);
		if (*(T + i) == NULL)
		{
			while (i >= 0)
			{
				free(T[i]);
				i--;
			}
			free(T);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			T[i][j] = 0;
		}
	}
	return (T);
}
