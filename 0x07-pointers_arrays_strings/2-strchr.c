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

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	if (*s == c)
		return (s);
	return (0);
}
