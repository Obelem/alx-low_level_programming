#include <stdio.h>

/*
 * main - prints name of file program was compiled from
 * Return: 0, alwaus success
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
