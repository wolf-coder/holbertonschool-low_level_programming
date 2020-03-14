#include "dog.h"
#include <stdlib.h>
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
	char *c = name;
	char *b = owner;

	if (name == NULL)
		c = "(nil)";
	if (owner == NULL)
		b = "(nil)";
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = c;
	dog->age = age;
	dog->owner = b;
	return (dog);

}
