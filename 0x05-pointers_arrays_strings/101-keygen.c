#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password for 101-crackme
 * Return: 0
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		printf("%c", c);
		putchar('\0');
	}
	putchar(2772 - sum);
	putchar('\0');
	return (0);
}
