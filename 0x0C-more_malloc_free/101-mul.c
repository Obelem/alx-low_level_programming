#include "main.h"

/**
 * _atoi - convert ascii to integer
 * @s: string to convert
 * Return: corresponding integer
 */

int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = 1;

	while (s[i] != 0)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
			i++;
			continue;
		}
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	return (num * sign);
}

/**
 * _itoa - integer to ascii
 * @n: integer to convert
 * @i: divisor
 * Return: pointer to string
 */
char *_itoa(int n, int i)
{
	int count = 0;
	int sign;
	int j = 0;
	char *ptr;

	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}

	while (i <= n)
	{
		i = i * 10;
		count++;
	}
	if (sign == -1)
		count++;

	ptr = malloc((count + 1) * sizeof(char));
	i = i / 10;

	while (j < count)
	{
		if (sign == -1)
		{
			ptr[0] = '-';
			j++;
			sign = 1;
			continue;
		}

		ptr[j] = (n / i) + '0';
		n = n % i;
		i = i / 10;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/**
 * main - multiplies tow positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0, Always Success
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul, i, j, k;
	char err[] = "Error";
	char *ans;

	if (argc != 3)
	{
		for (k = 0; err[k] != '\0'; k++)
			_putchar(err[k]);

		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j] < 48 || argv[i][j] > 57) && argv[i][j] != '-')
			{
				for (k = 0; err[k] != '\0'; k++)
					_putchar(err[k]);

				_putchar('\n');
				exit(98);
			}
		}
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;

	ans = _itoa(mul, 1);
	for (i = 0; ans[i] != '\0'; i++)
		_putchar(ans[i]);

	_putchar('\n');
	return (0);
}
