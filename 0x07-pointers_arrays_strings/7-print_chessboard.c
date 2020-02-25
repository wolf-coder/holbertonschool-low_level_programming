#include "holberton.h"
/**
* print_chessboard -print a chess position.
* @s : pointer to a multi-dimensional array.
* Return: Void
*/
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
