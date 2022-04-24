#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* To get length of destination */
	for (i = 0; dest[i] != '\0';)
		i++;

	/* To get length of source to be copied */
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	/* To add null terminator */
	dest[i + j] = '\0';
	return (dest);
}
