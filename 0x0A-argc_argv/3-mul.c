#include "main.h"
#include <stdio.h>


/**
 * _atoi - converts a string to integer value
 * @s: string input
 *
 * Return: int value from conversion
 */

int _atoi(char *s)
{
	int x, d, m, lt, f, number;

	x = 0;
	d = 0;
	m = 0;
	lt = 0;
	f = 0;
	number = 0;

	while (s[lt] != '\0')
		lt++;

	while (x < lt && f == 0)
	{
		if (s[x] == '-')
			++d;

		if (s[x] >= '0' && s[x] <= '9')
		{
			number = s[x] - '0';
			if (d % 2)
				number = -number;
			m = m * 10 + number;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, no1, no2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);
	result = no1 * no2;

	printf("%d\n", result);

	return (0);
}

