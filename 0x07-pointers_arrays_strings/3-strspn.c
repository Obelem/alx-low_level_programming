#include "main.h"

/**
 * _strspn - gets the length of the prefix of a substring
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ; )
		{
			if (s[i] == accept[j])
			{
				count++;
				j = 0;
				break;
			}
			else if (accept[j] == '\0')
				return (count);
			j++;
		}
	}
	return (count);
}
