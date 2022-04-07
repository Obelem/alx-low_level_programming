#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, sizeof(char), sizeof(str), stderr);

	fwrite("\n", sizeof(char), 1, stderr);

	return (0);
}
