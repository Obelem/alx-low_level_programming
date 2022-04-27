#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be scanned
 * @needle: string to locate
 *
 * Return: pointer to located substring if match or
 * NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0, j, k = 0;

	while (needle[len] != '\0')
		len++;

	for (j = 0; ; j++)
	{
		if (haystack[j] == '\0')
			return (NULL);

		while (haystack[j] == needle[k])
		{
			if (haystack[j] == '\0' && needle[k] == '\0')
				break;
			j++;
			k++;
		}
		if (needle[k] == '\0')
		{
			j = j - len;
			return (haystack + j);
		}
		k = 0;
	}
}
