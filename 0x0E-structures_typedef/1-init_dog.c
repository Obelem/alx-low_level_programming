#include "dog.h"

/**
 * init_dog - initialiizes dog struct
 * @d: pointer to struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
