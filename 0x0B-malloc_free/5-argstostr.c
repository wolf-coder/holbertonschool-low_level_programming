#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * argstostr -  function that concatenates all the arguments of your program.
 * @ac: parameters number.
 * @av: pointer to the parameters.
 * Return: string.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, size = 0, ind = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += _strlen(av[i]);
	str = malloc((size + ac) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0; j <= _strlen(av[i]); j++)
		{
			if (av[i][j] == '\0')
				str[ind] = '\n';
			else
					str[ind] = av[i][j];
			ind++;
		}
	}
	return (str);

}
