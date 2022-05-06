#include "main.h"

/**
 * strtow - splits a string into words
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
		end = endIndex(str, start);
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
/**
 * isSpace - determines if character is a space or not
 * @c: input char
 * Return: 1 if true or 0 or not
 */
int isSpace(char c)
{
	return (c == ' ');
}
/**
 * startIndex - returns first index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of first non-space char
 */
int startIndex(char *s, int index)
{
	while (isSpace(*(s + index)))
		index++;
	return (index);
}
/**
 * endIndex - returns last index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of last index of non-space char
 */
int endIndex(char *s, int index)
{
	while (!isSpace(*(s + index)))
		index++;
	return (index);
}
/**
 * countWords - counts numbers of words in string
 * @s: input string
 * Return: number of words
 */
int countWords(char *s)
{
	int wordOn = 0;
	int words = 0;

	while (*s)
	{
		if (isSpace(*s) && wordOn)
			wordOn = 0;
		else if (!isSpace(*s) && !wordOn)
		{
			wordOn = 1;
			words++;
		}
		s++;
	}
	return (words);
}
#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - frees a 2 dimensional array
 * @grid: multidimensional array of char.
 * @height: height of the array
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			aout[i][j] = str[a1];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
