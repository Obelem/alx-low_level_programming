#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: string to be worked on
 * Return: c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
	}
	return (c);
}
