#include <stdio.h>

/**
 * main - entrypoint for execution of the program
 *
 * Return: marks end of execution and time to exit program
 */

int main(void)
{
	int x;
	char y;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (y = 'a' ; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
