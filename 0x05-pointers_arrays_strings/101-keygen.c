#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - generates random password for 101-crackme
 * Return: 0
 */
int main(void)
{
	char a[0], c[0];
	int i, j, k = 0;
	printf("#Keygen by b44nz0r\n\n");

	while (k < 5 || k >= 10)
	{
		if (k != 0)
			printf("\n The username length should be 5 to 10 alphabets\n");

		printf("enter username: ");
		scanf("%s",a);
		k = strlen(a);
	}

	i = k - 1;
	j = 0;

	while (i >= 0)
	{
		c[j] = a[i]+i;
		i--;
		j++;
	}

	c[j] = 0;
	printf("\n The password is %s\n",c);
	printf("\nHit Enter to Exit\n");
	getchar();
	getchar();
}
