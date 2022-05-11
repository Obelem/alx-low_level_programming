#include <stdio.h>
#include "main.h"

/*
 * main - Prints name of file program was compiled from
 *
 * Return: 0, alwaus success
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
