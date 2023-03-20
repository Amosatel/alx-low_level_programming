#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start of the program
 *
 * Return: exit of the program
 */

int main(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 98 ; x++)
	{
		for (y = 1 ; y <= 99 ; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x + y != 197)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

