#include "main.h"

/**
 * _strchr - locates character in a string
 *
 * @s: string
 * @c: character to locate
 *
 * Return: s + i if there is match, NULL if no match
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s+i);
	}
	return ('\0');
}
