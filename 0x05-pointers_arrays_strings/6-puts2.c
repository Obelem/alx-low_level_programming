#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with first character, followed by /n
 *
 * @str: string to be printed
 */
void puts2(char *str)
{
	int len;
	char l;

	for (len = 0; *(str + len) != 0; len++)
	{
		if (len % 2 == 0)
		{
			l = *(str + len);
			_putchar(l);
		}
	}
	_putchar('\n');
}
