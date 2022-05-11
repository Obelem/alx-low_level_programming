#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);

	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
