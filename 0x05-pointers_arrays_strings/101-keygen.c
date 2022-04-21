#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
/**
 * main - generates random password for 101-crackme
 * Return: 0
 */
int main(void)
{
	
	int i;
	srand((unsigned int)(time(NULL)));
	char pass[12], capLetter, letter;
	

	for (i = 0; i < 4; i++)
	{
		pass[i] = rand() % 9;
		capLetter = 'A' + (rand() % 26);
		pass[i + 2] = capLetter;
		letter = 'a' + (rand() % 26);
		pass[i + 3] = letter;
		printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
	}
	printf("\n");
}
