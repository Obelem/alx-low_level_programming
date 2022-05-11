#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * struct dog - my first struct
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
