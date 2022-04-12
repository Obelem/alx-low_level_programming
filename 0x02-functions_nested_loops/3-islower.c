#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: contains value to be compared
 * Return: 1 if c is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
