#include "dog.h"
#include <stdlib.h>
#define SIZE(x) ((sizeof(x) / sizeof(x[0])))

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
	while (str[len] != '\0')
		len++;
	len++;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i <= len ; i++)
		p[i] = str[i];
	return (p);
}

/**
 *new_dog - function that creates a new dog.
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner name.
 *
 * Return: A pointer to the type of dog_t -> struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	dog->owner = _strdup(owner);
	if (!dog->owner || !dog->name)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
