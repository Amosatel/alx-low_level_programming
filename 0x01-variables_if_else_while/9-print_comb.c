#include <stdio.h>

/**
 * main - entry point for stsart of execution
 *
 * Return: exit point after execution
 */

int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

