#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be counted
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
