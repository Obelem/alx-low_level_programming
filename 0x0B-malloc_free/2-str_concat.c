#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to newly allocated space of concatenated
 * string with null terminator and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, f, m, l;
	char *len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;
	y++;

	f = x + y;
	len = malloc(sizeof(char) * f);

	if (len == NULL)
		return (NULL);
	for (m = 0; m < x; m++)
		len[m] = s1[m];
	for (l = 0; l < y; m++, l++)
		len[m] = s2[l];

	return (len);
}
