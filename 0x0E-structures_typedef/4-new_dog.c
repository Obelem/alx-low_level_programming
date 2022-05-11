#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;
	dog_t *dog_ptr;
	char *name_ptr, *owner_ptr;
	int i;

	if (name == 0 || owner == 0)
		return (NULL);

	for (i = 0; name[i] != '\0'; )
		i++;

	name_ptr = malloc((i + 1) * sizeof(char));

	if (name_ptr == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		name_ptr[i] = name[i];

	name_ptr[i] = '\0';

	for (i = 0; owner[i] != '\0'; )
		i++;

	owner_ptr = malloc((i + 1) * sizeof(char));
	if (owner_ptr == NULL)
		return (NULL);

	for (i = 0; owner[i] != '\0'; i++)
		owner_ptr[i] = owner[i];

	newdog.name = name;
	newdog.age = age;
	newdog.owner = owner;
	dog_ptr = &newdog;

	if (dog_ptr == NULL)
		return (NULL);

	return (dog_ptr);
}
