#include <stdio.h>

/**
 * main - this the entry point for execution of the program
 *
 * Return: this is where the program terminates
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	for (y = 'A' ; y <= 'Z' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
