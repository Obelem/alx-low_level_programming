#include "main.h"

/**
 * jack_bauer - prints every minute of Jack's day
 *
 * Return: Always 0 (Success)
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
