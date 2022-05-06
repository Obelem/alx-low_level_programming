#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - splits a string into words
 * @str: string of words to be split
 * Return: pointer to an array of strings (success) or NULL
 * if str == NULL or str == "" or function fails
 */
char **strtow(char *str)
{
	char **ptr;
	int i, k, len, start, end, j = 0;
	int words = countWords(str);

	if (!str || !countWords(str))
		return (NULL);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		start = startIndex(str, j);
		end = endIndex(atr, start);
		len = end - start;
		ptr[i] = malloc(sizeof(char) * (len + 1));
		if (!ptr[i])
		{
			i -= 1;
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			ptr[i][k] = str[start++];
		ptr[i][k++] = '\0';
		j = end + 1;
	}
	ptr[i] = NULL;
	return (ptr);
}
