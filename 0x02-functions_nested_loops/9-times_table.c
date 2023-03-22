#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int i;
	int k;
	int n;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');

		for (n = 1 ; n <= 9 ; n++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * n;
			if (k <= 9)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
