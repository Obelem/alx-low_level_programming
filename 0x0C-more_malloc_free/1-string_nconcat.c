#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: str length to concatenate
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, l;

	/* Treat as empty string if null */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of s1 and s2 using i and j respectively*/
	for (i = 0; s1[i] != '\0';)
		i++;

	for (j = 0; s2[j] != '\0';)
		j++;

	/* Dynamically allocate memory */
	ptr = malloc((i + n + 1) * sizeof(char));

	/* Null check for ptr address */
	if (ptr == NULL)
		return (NULL);

	/* Get values of s1 & s2 into ptr respectively */
	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];

	if (n < j)
	{
		for (l = 0; l < n; l++, k++)
			ptr[k] = s2[l];
		ptr[k] = '\0';
	}
	else
	{
		for (l = 0; s2[l] != '\0'; l++, k++)
			ptr[k] = s2[l];
		ptr[k] = '\0';
	}
	return (ptr);
}
