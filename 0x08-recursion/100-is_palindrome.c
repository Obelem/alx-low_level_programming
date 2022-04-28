#include "main.h"
/**
 * is_palindrome - Returns 1 if string is a palindrome or 0 if not
 * @s: string
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int first, last;

	first = 0;
	last = _strlen_recursion(s) - 1;
	return (palindrome(s, first, last));
}
/**
 * palindrome - third party function
 * @s: string to be tested
 * @first: integer for iteration and comparison
 * @last: integer for iteration and comparison
 *
 * Return: 1 or 0;
 */
int palindrome(char *s, int first, int last)
{
	if (first > last)
		return (1);
	else if (s[first] == s[last])
		return (palindrome(s, first + 1, last - 1));
	else
		return (0);
}
/**
 * _strlen_recursion - helps get string length recursively
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
