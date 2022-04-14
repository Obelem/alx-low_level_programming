#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 * @c: character to be checked
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
