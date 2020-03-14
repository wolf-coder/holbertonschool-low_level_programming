#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Info of the dog
 * @name: Dog name
 * @age: age
 * @owner: Owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
