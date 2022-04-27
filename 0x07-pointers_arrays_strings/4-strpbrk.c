#include "main.h"

/**
 * _strpbrk - searches a string for any of a set bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: address of first match if match or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			return (NULL);

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
}
