#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: Always 0 (Success)
 * @n: The number to be worked on
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}

	else
		return (n);
}
