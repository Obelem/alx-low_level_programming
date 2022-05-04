#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum no of coins to make change for an
 * amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cash, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	if (cash <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (coins = 0; cash > 0; coins++)
	{
		if (cash >= 25)
			cash -= 25;
		else if (cash >= 10)
			cash -= 10;
		else if (cash >= 5)
			cash -= 5;
		else if (cash >= 2)
			cash -= 2;
		else
			cash -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
