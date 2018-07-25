#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if( d! = null )
	{
		free((*d).(name));
		free((*d).(age));
		free((*d).(owner));
	}
	else return;
}
