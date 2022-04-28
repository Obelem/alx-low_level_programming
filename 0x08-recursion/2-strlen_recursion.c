#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *
 * @s: string to be counted
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;

	return 1 + _strlen_recursion(s + 1);
}
