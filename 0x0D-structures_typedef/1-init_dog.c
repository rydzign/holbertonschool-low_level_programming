#include "dog.h"

/**
 * init_dog - function to initialize struct dog
 * @name: Dogs name, Django
 * @age: Dogs age, 3.5
 * @owner: Dogs owner, Jay
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
