#include "dog.h"
#include <stdio.h>

/**
 *print_dog - a function that prints a struct dog.
 *
 *@d: Pointer to struct dog.
 *
 *Return: Void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %p\n", d->name);
		if (d->age != 0)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %p\n", d->name);
	}
}
